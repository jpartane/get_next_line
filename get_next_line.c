/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 16:36:29 by jpartane          #+#    #+#             */
/*   Updated: 2019/12/16 12:09:16 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
** While trash[len] is not a newline or a null, increase len value.
** Then store trash in *line using strndup. Protect this again cuz malloc
** Then if trash[len] is a newline, strcpy trash, and adress of trash[len + 1]
** this because a line has been already read, and when it hits a newline
** it will just copy the address after that newline in the start so
** the process will be quicker. Then just else because
** its either a newline or a NULL so only NULL is left at this point so
** no need to necessarily put "else(trash[len] == '\0')"
** Just put trash[0] to null character.
*/

static int			ft_new_line(char *trash, char **line)
{
	int		len;

	len = 0;
	while (trash[len] != '\n' && trash[len] != '\0')
		len++;
	if (!(*line = ft_strndup(trash, len)))
		return (-1);
	if (trash[len] == '\n')
	{
		trash = ft_strcpy(trash, &trash[len + 1]);
	}
	else
		trash[0] = '\0';
	return (1);
}

/*
** first if statement checks for errors.
** Then while loop while ret... > 0. Buff[ret] = '\0' null terminates.
** After that check if trash[fd] = NULL
** . Then with strjoin put trash[fd] and buff together,
** also protecting this event because strjoin uses malloc. (if fail ret -1)
** Then with strdel release tmp (this doesnt leave any dangling pointers
** in the code like free() would so argument for bonus there.)
** Then if ret is negative, return -1. else if ret == 0 and one of the
** statements in parentheses match, then reading has been completed
** and program returns to 0.
*/

int					get_next_line(const int fd, char **line)
{
	static char		*trash[FD_SIZE];
	char			buff[BUFF_SIZE + 1];
	char			*tmp;
	int				ret;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if ((trash[fd] == NULL) && !(trash[fd] = ft_strnew(0)))
			return (-1);
		tmp = trash[fd];
		if (!(trash[fd] = ft_strjoin(trash[fd], buff)))
			return (-1);
		ft_strdel(&tmp);
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (trash[fd] == NULL || trash[fd][0] == '\0'))
		return (0);
	return (ft_new_line(trash[fd], line));
}

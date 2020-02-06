/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:00:08 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 09:36:00 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the string s to the file descriptor fd.
** A file descriptor of 0, 1 or 2, refers to the standard input,
** standard output or standard error.
*/

void	ft_putstr_fd(char const *s, int fd)
{
	int index;

	if (!s)
		return ;
	index = 0;
	while (s[index] != '\0')
	{
		ft_putchar_fd(s[index], fd);
		index++;
	}
}

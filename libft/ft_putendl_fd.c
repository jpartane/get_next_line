/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:46:08 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 09:26:25 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the string s to the file descriptor fd followed by newline.
** A file descriptor of 0, 1 or 2, refers to the standard input
** standard output or standard error
*/

void	ft_putendl_fd(char const *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}

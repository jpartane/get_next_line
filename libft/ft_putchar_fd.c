/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 10:41:12 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 09:23:00 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function outputs the character c to the specified file descriptor.
** A file descriptor of 0, 1 or 2, refers to the standard input,
** standard output or standard error.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

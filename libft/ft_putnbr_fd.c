/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:57:44 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 09:33:34 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the integer n to the file descriptor fd.
** A file descriptor of 0, 1 or 2 refers to the standard input,
** standard output or standard error.
*/

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		(n = 147483648);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		(n = n * -1);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd(n % 10 + '0', fd);
}

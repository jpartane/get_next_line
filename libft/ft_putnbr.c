/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:43:12 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 09:28:52 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the integer n to the standard output.
*/

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		(n = 147483648);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		(n = n * -1);
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar(n % 10 + '0');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 13:45:33 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 12:44:10 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** converts int data type to string data type.
** len-- -1: it starts from the end of the array and skip '\0' with -1.
** n(21) % 10 + 48(ascii 0) = 50.1 and we have just space for 1 char in
** our array so 1 would be saved in str. After this the program removes
** the 1 from 21 so earlier n = 21 and now n = 2. Then it does the
** same formula again n(2) % 10 + 48 = 48.2 so now it takes the 2
** and 21 is printed. In case of a negative integer, the minus would be
** stored in the array as a char on str[0] and removed from the int
** with -n
*/

static int		length(int n)
{
	int		len;

	len = 0;
	if (n < 0)
		len++;
	if (n == 0)
		len = 1;
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = length(n);
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		if (n == -2147483648)
		{
			str[len-- - 1] = '8';
			n = n / 10;
		}
		n = -n;
	}
	while (n != 0 && len >= 0)
	{
		str[len-- - 1] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}

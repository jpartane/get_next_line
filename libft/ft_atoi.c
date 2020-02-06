/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 14:30:29 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/12 14:34:05 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Converts the string pointed to by str to an integer.
** First check for whitespace characters.
** Then check if the first char of the string is '+' or '-'
** In the while loop the actual converting happens
** (example 1234 starts from  = 0 * 10 + 1 + '0' = 1
** -> 1 * 10 + 2 + '0' = 12 etc, and it checks the i from isdigit)
** and return (nbr * sign) because if the number is negative,
** in first if statement sign is set to -1 so then it would
** last convert it back to negative
*/

int		ft_atoi(const char *str)
{
	int i;
	int nbr;
	int sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && ft_isdigit(str[i]))
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return (nbr * sign);
}

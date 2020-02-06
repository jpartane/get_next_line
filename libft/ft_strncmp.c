/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 11:19:27 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 10:21:59 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** this function takes two strings and compares the first n bytes of str1 & str2
** str1 is the first string to be compared. str2 is the second to be compared
** n is the maximum number of characters to be compared
** if return value < 0 then str1 is less than str2
** if return value > 0 then str2 is less than str1
** if return value = 0 then str1 and str2 are equal
*/

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	index;

	if (n == 0)
		return (0);
	index = 0;
	while (str1[index] == str2[index] && str1[index] != '\0' && index < (n - 1))
	{
		index++;
	}
	return ((unsigned char)str1[index] - (unsigned char)str2[index]);
}

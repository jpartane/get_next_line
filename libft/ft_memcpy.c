/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:16:51 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/12 15:23:10 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** copies n characters from memory area str2 to memory area str1
** First declare variables i and 2 pointers for each string.
** Then set i value 0 and while parameter variable n is greater than 0
** tmpdst[i] == tmpsrc[i] is the copying part, and it will copy the whole thing
** while increasing i value and, decreasing n value until it hits 0.
*/

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;

	tmpdst = (unsigned char *)str1;
	tmpsrc = (unsigned char *)str2;
	i = 0;
	if (!n || str1 == str2)
		return (str1);
	while (n > 0)
	{
		tmpdst[i] = tmpsrc[i];
		i++;
		n--;
	}
	return (str1);
}

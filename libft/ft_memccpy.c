/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:34:22 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/12 15:18:40 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The memccpy function copies bytes from string s2 to string s1. If the char
** c (converted to unsigned char) occurs in s2, the copy stops and a ptr
** to the byte after the copy of c in the string s1 is returned.
** Otherwise n bytes are copied and a NULL pointer is returned.
** First declare variable i, pointers to each string and variable tmpc
** Then set i value to 0 and while n is greater than 0
** tmpdst[i] = tmpsrc[i] is the copying part, and by increasing
** i value and decreasing n value it goes through the src string and
** copies them. N value does not necessarily go to 0 here, because
** the program will stop when it finds the first c char.
** if s2 = whatever c is, it will just return that.
*/

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;
	unsigned char	tmpc;

	tmpdst = (unsigned char *)s1;
	tmpsrc = (unsigned char *)s2;
	tmpc = (unsigned char)c;
	i = 0;
	while (n > 0)
	{
		tmpdst[i] = tmpsrc[i];
		if (tmpsrc[i] == tmpc)
		{
			i++;
			return ((void *)&tmpdst[i]);
		}
		i++;
		n--;
	}
	return (NULL);
}

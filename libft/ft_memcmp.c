/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:01:22 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/12 15:22:27 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function compares the first n bytes of memory area s1
** and memory area s2.
** While i is lesser than n and the strings are equal,
** by increasing i value it will go through the strings
** and look for chars that differ from eachother and
** return s1 minus s2.
** (example in my main s1 = Snoop s2 = Dogg, the first chars
** are different so it will print out ascii difference
** S - D which = 15) if i is equal to n it means that
** the strings are identical and returns zero
*/

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmps1;
	unsigned char	*tmps2;

	tmps1 = (unsigned char *)s1;
	tmps2 = (unsigned char *)s2;
	i = 0;
	while (i < n && tmps1[i] == tmps2[i])
		i++;
	if (i == n)
		return (0);
	return (tmps1[i] - tmps2[i]);
}

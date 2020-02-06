/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:51:51 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/12 15:21:29 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function searches for the first occurrence of the char c
** (unsigned char) in the first n bytes of the string pointed to
** by the argument s. While loop checks if i value is lesser than n
** it increases i value and goes through the string looking
** for the similar character. When it finds it, (ptr[i] == tmpc)
** the if condition is true and it will return ptr + i
** and that is what is left after the similar character.
** Otherwise it will return NULL
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*ptr;
	unsigned char		tmpc;
	size_t				i;

	tmpc = (unsigned char)c;
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == tmpc)
			return (ptr + i);
		i++;
	}
	return (NULL);
}

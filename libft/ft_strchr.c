/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 18:58:14 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 09:46:45 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** this function searches for the first occurrence of the character c
** in the string pointed to by the argument str
** 1) set a pointer. 2) set that ptr pointing to the string
** 3) while ptr is not c (corner condition returns a NULL if the c
** is not to be found in the string) increase the ptr value
** so it goes through the string and return the pointer
*/

char	*ft_strchr(const char *s, int c)
{
	char *ptr;

	ptr = (char *)s;
	while (*ptr != c)
	{
		if (*ptr == '\0')
		{
			return (NULL);
		}
		ptr++;
	}
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 19:25:08 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 10:21:09 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**This function appends a copy of the null-terminated string src
** to the end of null-terminated string dest, then add a terminating '\0'
** The string dest must have sufficient space to hold the result
** First go through dest string. Then 2nd while loop the appending
** happens setting dest[l] to src[i] and increasing i and l value
** when appending is done, and null at the end of the string.
** appends not more than n characters from src.
*/

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	while (dest[l])
	{
		l++;
	}
	while (src[i] && i < n)
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 11:10:20 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 10:22:27 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies at most n characters of the string src
** and returns a pointer to it. Always NULL terminating
** the copied string. If insufficient memory is available
** returns NULL. First allocate space.
** Then copies in the while loop by increasing len
** the string to the allocated space, put NULL at the end
** and returns the destination.
*/

char	*ft_strndup(const char *src, size_t n)
{
	char		*dest;
	size_t		len;

	dest = malloc(sizeof(*dest) * (n + 1));
	if (!dest)
		return (NULL);
	len = 0;
	while (src[len] && len < n)
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

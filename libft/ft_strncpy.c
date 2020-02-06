/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 13:50:03 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 10:22:10 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copy at most n characters from src into dst.
** If src is less than n characters long, the remainder of dst
** is filled with '\0' characters. Otherwise dst is not terminated.
** First while loop it does the copying
** Second while loop it puts the null characters
*/

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	x;

	x = 0;
	while (src[x] && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

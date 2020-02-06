/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 14:09:47 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 10:13:22 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** appends string src to the end of dst. It will append at most
** destsize - 1 characters. First measure the lengths of both strings
** and store them to dest_l and src_l. Then first while loop
** iterate through dest and store it in i. Second while loop starts
** appending the src to the end of dst by increasing i and l value.
** Returns the total length of the string it tried to create.
*/

size_t		ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	l;
	size_t	dest_l;
	size_t	src_l;

	dest_l = ft_strlen(dest);
	src_l = ft_strlen(src);
	if (destsize == 0 || destsize < dest_l)
	{
		return (destsize + src_l);
	}
	i = 0;
	l = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[l] && i < destsize - 1)
	{
		dest[i] = src[l];
		l++;
		i++;
	}
	dest[i] = '\0';
	return (dest_l + src_l);
}

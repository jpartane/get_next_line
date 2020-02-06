/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:40:35 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 09:18:56 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function copies n characters from src to dst
** First set pointers to each string.
** Then if dst is lesser than src, it will just memcpy it.
** Otherwise, while len is greater than 0, it will loop through
** the strings backwards. tmpdst[len - 1] = tmpsrc[len -1]
** is the copying part, and decreasing len value by 1,
** it will copy the string backwards and return dst when its done.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;

	tmpdst = (unsigned char *)dst;
	tmpsrc = (unsigned char *)src;
	if (!len || dst == src)
		return (dst);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
		while (len > 0)
		{
			tmpdst[len - 1] = tmpsrc[len - 1];
			len--;
		}
	return (dst);
}

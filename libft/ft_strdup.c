/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:27:56 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 09:56:46 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates sufficient memory for a copy of the string src, does the copy
** and returns a pointer to it. If allocation fails will return 0
*/

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		len;

	len = 0;
	while (src[len])
	{
		len++;
	}
	dest = (char*)malloc(sizeof(*dest) * (len + 1));
	if (!dest)
		return (NULL);
	len = 0;
	while (src[len])
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

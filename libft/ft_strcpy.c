/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 11:57:15 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 09:55:08 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies the string src to dst including terminating null '\0' character.
*/

char	*ft_strcpy(char *dest, const char *src)
{
	int		len;

	len = 0;
	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

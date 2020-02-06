/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:44:36 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/14 10:38:10 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function appends a copy of the null-terminated string src
** to the end of null-terminated string dest, then add a terminating '\0'
** The string dest must have sufficient space to hold the result
** First go through dest string. Then 2nd while loop the appending
** happens setting dest[l] to src[i] and increasing i and l value
** when appending is done, and null at the end of the string.
*/

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	int		l;

	i = 0;
	l = 0;
	while (dest[l])
	{
		l++;
	}
	while (src[i])
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l] = '\0';
	return (dest);
}

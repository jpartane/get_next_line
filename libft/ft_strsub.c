/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:51:24 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/12 12:25:52 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates with malloc() and returns "fresh" substring from the
** string given as argument. The substring begins at indexstart and
** is of size len. If start and len arent referring to a valid substring
** the behavior is undefined. If the allocation fails, the function
** returns NULL. First allocate the space. Then protect string and malloc
** while len is greater than 0, put allocated str[i] as s[start]
** (example if s = Hello and start = 2, program will give out llo)
** and loop through the string increasing i and start value, while
** decreasing len. return the substring.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (len > 0)
	{
		str[i] = s[start];
		i++;
		start++;
		len--;
	}
	str[i] = '\0';
	return (str);
}

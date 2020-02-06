/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:14:10 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 10:23:29 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function locates the first occurrence of the null-terminated
** string to_find in the string str, where not more than len
** characters are searched. Characters that appear after '\0' char
** are not searched. First it checks if to_find is null, if it is
** the program will return the string as it is.
** First it starts go through the string str by increasing i value.
** Then everytime before moving forward to increase i value again,
** it checks if any of the conditions in 2nd while loop or if
** statement is true. If not, it will increase i. If yes,
** it will start increasing j value to see how long the 2 strings match.
** It will return the similarity and the whole string after that
** if there is any. (example str = Fii Fai Fou, to_find = Fai, it will
** print out Fai Fou, not just Fai like strstr)
**If nothing matches, it returns NULL
*/

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*to_find == '\0')
	{
		return ((char *)str);
	}
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] && i + j < len && to_find[j]
				&& str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}

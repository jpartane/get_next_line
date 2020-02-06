/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:03:57 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/14 12:03:02 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function finds the first occurrence of the substring to_find
** in the string str. The terminating '\0' are not compared.
** First it checks if to_find is 0, if yes, program returns the string
** as it is. If this is not true, 1st while loop checks the whole string (str)
** by increasing i. It compares to_finds strlen with every increase
** of the i value. When it hits the first similarity, it starts
** increasing j value to go through the string to_find.
** as long as the characters in strings str and to_find match,
** program will loop through to_find. And finally, will return the address
** of str[i]. If none of these conditions are true, program will return NULL
*/

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*to_find == '\0')
	{
		return ((char *)str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != 0)
		{
			j++;
		}
		if (j == ft_strlen(to_find))
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}

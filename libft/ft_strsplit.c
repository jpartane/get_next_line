/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 17:50:13 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/14 11:35:54 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** First the program counts the number of strings (count_strings)
** In count_strings, while string exists, first while loop counts
** through the delimeter for example '*' and when it doesnt find an
** delimeter, there is an if statement where nbr_strs is incremented.
** This saves the number of the strings in this variable.
** last while loop it will iterate through the string by increasing str
** value and if/when it finds the delimeter again, the process will restart
** And it will return the number of the strings.
** Now it allocates the space and store it in result.
** While l is lesser than number of strings, the program will iterate
** first through the delimeters, when it hits the first character
** it will iterate through that and again when delimeter is encountered
** ft_strndup is used to allocate and copy the first word and lastly
** iterating through the string and removing the word and delim that was just
** duplicated by strndup, and same thing is repeated until the whole
** original string is iterated through and returns the result.
*/

static int		count_strings(char *str, char c)
{
	int		nbr_strs;

	nbr_strs = 0;
	while (*str)
	{
		while (*str == c && *str)
		{
			str++;
		}
		if (*str != c && *str)
		{
			nbr_strs++;
		}
		while (*str != c && *str)
		{
			str++;
		}
	}
	return (nbr_strs);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	nbr_strs;
	char	**result;
	size_t	i;
	size_t	l;

	if (!s)
		return (NULL);
	l = 0;
	nbr_strs = count_strings((char *)s, c);
	if (!(result = (char**)malloc(sizeof(char*) * nbr_strs + 1)))
		return (NULL);
	while (l < nbr_strs)
	{
		i = 0;
		while (*s == c && *s)
			s++;
		while (s[i] != c && s[i])
			i++;
		result[l] = ft_strndup((char*)s, i);
		l++;
		while (*s != c && *s)
			s++;
	}
	result[l] = NULL;
	return (result);
}

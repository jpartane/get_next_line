/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 12:48:08 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 12:21:40 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates with malloc() and returns a copy of the string given as
** argument without whitespaces at the beginning or at the end of the string.
** First check the string lenght and store it in end.
** Then it checks whitespaces from the beginning and the end with isspace.
** After this it allocates the space with strnew and here it removes
** the possible whitespaces. Also sets null char to every byte in fresh string.
** Then strncpy sets the string characters to the fresh string and returns that.
*/

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	char	*new;

	if (!s)
	{
		return (NULL);
	}
	start = 0;
	end = ft_strlen(s);
	while (ft_isspace(s[start]))
		start++;
	while (ft_isspace(s[end - 1]))
		end--;
	if (end < start)
		end = start;
	new = ft_strnew(end - start);
	if (new == NULL)
		return (NULL);
	return (ft_strncpy(new, s + start, end - start));
}

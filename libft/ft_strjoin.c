/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 09:49:35 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 10:11:57 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates with malloc() and returns a "fresh" string ending with '\0'
** result of the concatenation of s1 and s2. If the allocation fails
** the function returns NULL
** First in fresh, strlen calculates the length for both strings.
** Then ft_strnew allocates the space slot for s1 and s2 length
** and sets every memoryspace to NULL ("fresh" string)
** Then strcpy adds s1 to fresh (in my main hello)
** and after that fresh = hello + the empty spaces for s2 length
** and with strcat it concatenates s2 to fresh = hello world is printed)
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;

	if (!s1 || !s2)
		return (NULL);
	fresh = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (fresh == NULL)
		return (NULL);
	ft_strcpy(fresh, s1);
	ft_strcat(fresh, s2);
	return (fresh);
}

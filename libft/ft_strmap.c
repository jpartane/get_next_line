/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:48:54 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 10:17:06 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function f to each character of the string given as
** argument to create a "fresh" new string and returns it.
** First it calculates length of s with strlen.
** Then create the "fresh" string with strnew and store that in fresh.
** Then in the while loop it sets string s to the freshly created string
** with pointer to function and iterates through by increasing i.
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*fresh;

	if (!s || !f)
		return (NULL);
	fresh = ft_strnew(ft_strlen(s));
	if (!fresh)
		return (NULL);
	i = 0;
	while (s[i])
	{
		fresh[i] = (*f)(s[i]);
		i++;
	}
	return (fresh);
}

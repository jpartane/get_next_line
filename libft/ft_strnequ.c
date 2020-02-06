/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 12:01:28 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 10:22:52 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Lexicographical comparison between s1 and s2 up to n characters.
** First check the condition if strings exist.
** If not, return 0 and program ends.
** Then checks while loops condition if the strings
** are equal and not NULL and i has to be smaller than n.
** Then will increase i value n times until hitting NULL
** If i value is smaller than n and strings are equal or i equals n, returns 1
** Otherwise returns 0.
*/

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
		i++;
	if ((i < n && s1[i] == s2[i]) || i == n)
		return (1);
	return (0);
}

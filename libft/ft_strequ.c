/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:51:25 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 09:57:18 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compare s1 and s2 lexicographically.
** First it checks if the strings exist. If they dont, return 0 and
** program stops. Then it checks the while condition,
** if the strings are equal and not NULL
** it will increase the i value until it reaches to the null of the strings.
** If they are identical, it returns 1, otherwise it returns 0.
*/

int		ft_strequ(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (s1[i] == s2[i])
		return (1);
	return (0);
}

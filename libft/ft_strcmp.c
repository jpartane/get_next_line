/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 14:18:34 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 09:53:38 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function lexicographically compare the null terminated strings
** s1 and s2. Returns an integer greater than, equal to or less than 0,
** according as the string s1 is greater than, equal to or less than s2.
** The comparison is done using unsigned characters so that '\200' is
** greater than '\0'
*/

int		ft_strcmp(const char *s1, const char *s2)
{
	int index;

	index = 0;
	while ((unsigned char)s1[index] == (unsigned char)s2[index] &&
			s1[index] != '\0')
	{
		index++;
	}
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}

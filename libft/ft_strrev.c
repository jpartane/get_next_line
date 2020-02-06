/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:47:46 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 10:24:47 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function takes a string and reverses it
** First it iterates in while loop to see how many chars there
** are in the string. Because it stops when its null, there is
** i-- after once so it dont take that into account.
** In the second while loop the actual reverse happens.
** while j is lesser than i it sets tmp to s[i] which is
** the number how long is the string inputted. then j value is 0
** so it sets s[i] = s[j]. (example: string = "hello" would be
** s[5] = s[0]) and then s[j] = tmp) and return reversed string.
*/

char	*ft_strrev(char *s)
{
	int		i;
	int		j;
	char	tmp;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	i--;
	j = 0;
	while (j < i)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i--;
		j++;
	}
	return (s);
}

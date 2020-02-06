/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:41:55 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 10:23:51 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function searches for the last occurrence of the char c in
** the string pointed to, by the argument s.
** First creates pointer in this case called last_pos and sets it to null.
** While string (exists) it loops through the whole string
** and while it hits the char c (lets say a #) it sets the pointer
** last to that # . Then as the loop continues to go through the string,
** the next # it hits it will set last pointer to that.
** Once the whole string has been checked, if last_pos exists,
** the program returns that same thing. If c is not found in the string
** it will return NULL
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = (0);
	while (*s)
	{
		if (*s == c)
			last = (char *)s;
		s++;
	}
	if (last)
		return (last);
	if (c == '\0')
		return ((char *)s);
	return (0);
}

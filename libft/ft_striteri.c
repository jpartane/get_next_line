/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:39:20 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 10:06:00 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function f to each character of the string passed as
** argument, and passing its index as first argument. Each character
** is passed by address to f to be modified if necessary
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (s && f)
	{
		i = 0;
		while (s[i] != '\0')
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}

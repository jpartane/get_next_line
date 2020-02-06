/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:23:25 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 10:03:47 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function f to each character of the string passed as
** argument. Each character passed is by address to f to be modified
** if necessary. First check if the string and funcion f exist,
** then loop through the string and with every i increase, show 1
** char less (example in main with hello -> ello -> llo..)
*/

void	ft_striter(char *s, void (*f)(char*))
{
	int		i;

	if (s && f)
	{
		i = 0;
		while (s[i] != '\0')
		{
			f(&s[i]);
			i++;
		}
	}
}

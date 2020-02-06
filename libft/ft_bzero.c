/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 17:04:30 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/12 14:36:57 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** this function takes a string and sets the n bytes of the area
** starting at s to zeroes ('\0'). Does not return anything
*/

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = (char *)s;
	while (n > 0)
	{
		tmp[i] = '\0';
		i++;
		n--;
	}
}

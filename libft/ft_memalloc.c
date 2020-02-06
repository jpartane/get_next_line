/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:02:32 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/12 15:16:25 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates with malloc() and returns a "fresh" memory area.
** The memore allocated is initialized to 0.(with bzero)
** If the allocation fails, the function returns NULL
*/

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if (!(mem = malloc(size)))
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}

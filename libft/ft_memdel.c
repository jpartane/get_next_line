/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:38:36 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/12 15:23:29 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_memdel function takes the address of a memory area that
** needs to be freed with free() and then sets the pointer to NULL.
** **ap (double pointer) the first pointer is used to store the address
** of the variable. And the second pointer is used to store the address
** of the first pointer.
*/

void	ft_memdel(void **ap)
{
	if (ap && *ap)
	{
		free(*ap);
		*ap = NULL;
	}
}

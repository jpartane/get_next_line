/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:07:44 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 09:55:24 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes as a parameter the address of a string that need to be
** freed with free() and then sets its pointer to NULL
*/

void	ft_strdel(char **as)
{
	if (as)
	{
		free(*as);
		*as = NULL;
	}
}

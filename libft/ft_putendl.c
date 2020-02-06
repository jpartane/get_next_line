/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 08:56:49 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 09:24:23 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the string s to the standard input followed by a newline
*/

void	ft_putendl(char const *s)
{
	if (s)
	{
		ft_putstr(s);
		ft_putchar('\n');
	}
}

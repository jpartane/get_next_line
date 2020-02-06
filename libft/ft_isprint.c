/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 12:57:54 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/12 15:11:46 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Tests for any printing character, including space ' '
*/

int		ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

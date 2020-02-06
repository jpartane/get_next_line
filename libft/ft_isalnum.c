/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 13:13:13 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/12 15:08:09 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Checks if any character is a alphabet char or an digit.
*/

int		ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	else
		return (0);
}

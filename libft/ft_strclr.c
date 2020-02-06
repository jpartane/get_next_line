/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:25:47 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 09:46:52 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Sets every character of the string to the value '\0'
*/

void	ft_strclr(char *s)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		s[i] = '\0';
		i++;
	}
}

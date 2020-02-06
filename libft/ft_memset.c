/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:08:26 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/13 09:19:04 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function takes a string, and copies the character c (= whatever
** you set as, for example like % mark) to the first n characters
** of the string pointed to, by the argument str
*/

void	*ft_memset(void *str, int c, size_t n)
{
	size_t				i;
	char				*tmp;
	unsigned char		tmpc;

	i = 0;
	tmp = (char *)str;
	tmpc = (unsigned char)c;
	while (n > 0)
	{
		tmp[i] = tmpc;
		i++;
		n--;
	}
	return (str);
}

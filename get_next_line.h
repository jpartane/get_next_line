/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 14:59:04 by jpartane          #+#    #+#             */
/*   Updated: 2020/02/06 10:33:47 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define FD_SIZE 4864
# define BUFF_SIZE 32

# include <unistd.h>
# include "libft/libft.h"

int		get_next_line(const int fd, char **line);

#endif

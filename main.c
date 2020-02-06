/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <jpartane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 16:41:11 by jpartane          #+#    #+#             */
/*   Updated: 2020/02/06 11:19:49 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include "libft/libft.h"

int			main(int argc, char **argv)
{
		char *line;
		int		fd;

		if (argc == 1)
		{
			ft_putendl("Give me a file to read");
			return (0);
		}

		if (argc == 2)
		{
			
			fd = open(argv[1], O_RDONLY);
			while ((get_next_line(fd, &line)) == 1)
			{
				ft_putstr(line);
				ft_putchar('\n');
			}
			close (fd);
		}
		return (0);
}

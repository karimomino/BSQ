/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 19:47:26 by kamin             #+#    #+#             */
/*   Updated: 2021/06/07 23:39:48 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"
#include "ft_string_manipulation.c"
#include "ft_prints.c"

/* Takes Parsed Map As Input And Returns 0 If Successful and -1 If Invalid Map*/
char		**map_check(char *file)
{
	int valid_map;
	char	buf;
	char 	*map[] = "";
	int		i;
	int		read_val;
	int		fd;

	i = 0;
	valid_map = -1;
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_fputstr("Error while opening file\n");
		//return (1);
	}
	while ((read_val = read(fd, &buf, 1)) > 0)
	{
		if (buf == '\n')
			i++;
		else
			ft_strcat(map[i], &buf);
		ft_putchar(buf);
	}
	close (fd);
	return (map);
}

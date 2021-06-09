/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 14:18:00 by kamin             #+#    #+#             */
/*   Updated: 2021/06/09 08:51:46 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"
//#include "ft_string_manipulation.c"
//#include "ft_prints.c"

t_map_def	ft_open_read(char *file, int *fd)
{
	char		buff;
	t_map_def	map_data;

	map_data.line_length = 0;
	map_data.line_numbers = 0;
	map_data.mapdir = file;
	map_data.map_chars = 0;
	*fd = open(file, O_RDONLY);
	while (read(*fd, &buff, 1) > 0)
	{
		if (buff == '\n')
			map_data.line_numbers++;
		else if (map_data.line_numbers == 1)
			map_data.line_length++;
		else if (map_data.line_numbers == 0)
			map_data.map_chars++;
	}
	close(*fd);
	return (map_data);
}

void		ft_clone_map(t_map_def *map_def)
{
	char	buff[map_def->line_length];
	int		i;
	int		j;
	int		fd;

	i = 0;
	j = 0;
	map_def->map = (char**)malloc(map_def->line_numbers * sizeof(char*));
	fd = open(map_def->mapdir, O_RDONLY);
	read(fd, &buff, map_def->map_chars + 1);
	while (i < map_def->line_numbers - 1)
	{
		map_def->map[i] = malloc((map_def->line_length + 2) * sizeof(char));
		read(fd, &buff, map_def->line_length + 1);
		ft_strcpy(map_def->map[i], buff);
		i++;
	}
	close(fd);
}

void		ft_map_chars(t_map_def *map_def)
{
	int		fd;
	int		temp_lines;
	int		i;
	char	buff[map_def->map_chars];
	char	*temp;

	temp_lines = 0;
	i = 0;
	temp = malloc(map_def->map_chars + 1 * sizeof(char));
	fd = open(map_def->mapdir, O_RDONLY);
	read(fd, &buff, map_def->map_chars + 1);
	ft_strcpy(temp, buff);
	map_def->box = temp[map_def->map_chars - 1];
	map_def->obstacle = temp[map_def->map_chars - 2];
	map_def->available = temp[map_def->map_chars - 3];
	while (i < map_def->map_chars - 3)
	{
		temp_lines *= 10;
		temp_lines += temp[i] - 48;
		i++;
	}
	map_def->input_line_numbers = temp_lines;
}

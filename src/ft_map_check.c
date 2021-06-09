/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 07:13:57 by kamin             #+#    #+#             */
/*   Updated: 2021/06/09 08:50:57 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"

int			ft_validate_lines(t_map_def map_def)
{
	int i;

	i = 0;
	while (i < map_def.line_numbers - 1)
	{
		if (map_def.map[i][map_def.line_length] != '\n')
			return (1);
		i++;
	}
	if (map_def.input_line_numbers != map_def.line_numbers - 1)
		return (1);

	return (0);
}

int			ft_validate_one_line(t_map_def map_def)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < map_def.line_numbers - 1)
	{
		while (j < map_def.line_length)
		{
			if (map_def.map[i][j] == map_def.available)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int			ft_validate_chars(t_map_def map_def)
{
	int i;
	int j;
	int error;

	i = 0;
	j = 0;
	error = 0;
	while (i < map_def.line_numbers - 1)
	{
		while (j < map_def.line_length)
		{
			if (map_def.map[i][j] != map_def.available)
				if (map_def.map[i][j] != map_def.obstacle)
					if (map_def.map[i][j] != map_def.box)
						if (!ft_str_is_printable(map_def.map[i][j]))
							error = 1;
			j++;
		}
		j = 0;
		i++;
	}
	return (error);
}

int			ft_map_check(t_map_def map_def)
{
	int	error;

	error = 0;
	if (ft_validate_lines(map_def) == 1)
		error = 1;
	if (ft_validate_one_line(map_def) == 1)
		error = 1;
	if (ft_validate_chars(map_def) == 1)
		error = 1;
	return (error);
}

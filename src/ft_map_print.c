/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 03:14:11 by kamin             #+#    #+#             */
/*   Updated: 2021/06/09 05:28:40 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"

void	ft_map_print(t_map_def map_def)
{
	int i;

	i = 0;
	while (i < map_def.line_numbers - 1)
	{
		ft_putstr(map_def.map[i]);
		i++;
	}
}

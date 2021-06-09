/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 04:33:43 by kamin             #+#    #+#             */
/*   Updated: 2021/06/09 08:51:38 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"
//#include "ft_file.c"
//#include "ft_map_print.c"
//#include "ft_map_check.c"

int		ft_bsq(char *file)
{
	int success;
	int fd;
	t_map_def x = ft_open_read(file, &fd);

	success = 0;
	ft_clone_map(&x);
	ft_map_chars(&x);
	printf("Available Char:%c\tObstacleChar:%c\tFillIn Char:%c\n", x.available, x.obstacle, x.box);
	if (ft_map_check(x) == 0)
		ft_map_print(x);
	else
		ft_fputstr("map error\n");
	return success;
}

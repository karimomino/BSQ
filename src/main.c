/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 00:06:20 by lde-alen          #+#    #+#             */
/*   Updated: 2021/06/09 08:51:28 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"
//#include "ft_bsq.c"


int		main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_bsq(av[i]);
		i++;
	}
	return (0);
}

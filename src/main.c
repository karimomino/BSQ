/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 00:06:20 by lde-alen          #+#    #+#             */
/*   Updated: 2021/06/07 18:36:12 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"

int		main(int ac, char **av)
{
	int	fd;
	int	i;
//	char buf[1];

	i = 1;
	while (i < ac)
	{
		ft_bsq(av[i]);
		i++;
	}
	return (0);
}

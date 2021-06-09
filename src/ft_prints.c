/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 23:20:14 by lde-alen          #+#    #+#             */
/*   Updated: 2021/06/09 05:10:53 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_fputchar(char c)
{
	write(2, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_fputstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_fputchar(str[i]);
		i++;
	}
}

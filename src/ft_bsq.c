/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 03:56:33 by lde-alen          #+#    #+#             */
/*   Updated: 2021/06/07 19:20:37 by lde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"

int	ft_bsq(char *file)
{
	char	buf;
	char 	**map;
	int		i;
	int		read_val;
	int		fd;

	i = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_fputstr("Error while opening file\n");
		return (1);
	}
	while ((read_val = read(fd, &buf, 1)) > 0)	
	{
		if ()
		ft_putchar(buf);
	}
	close (fd);
	return (0);
}

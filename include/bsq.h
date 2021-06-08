/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 00:07:46 by lde-alen          #+#    #+#             */
/*   Updated: 2021/06/07 23:18:47 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>




# include <stdio.h>





void	ft_putchar(char c);
void	ft_fputchar(char c);
void	ft_putstr(char *str);
void	ft_fputstr(char *str);
int		ft_bsq(char *file);
void	ft_print_map(char **map, int rows);
char	*ft_strcat(char *dest, char *src);
char	**map_check(char *file);

#endif


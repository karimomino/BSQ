/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-alen <lde-alen@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 00:07:46 by lde-alen          #+#    #+#             */
/*   Updated: 2021/06/07 16:39:31 by lde-alen         ###   ########.fr       */
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

#endif


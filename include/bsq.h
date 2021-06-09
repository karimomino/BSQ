/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 00:07:46 by lde-alen          #+#    #+#             */
/*   Updated: 2021/06/09 08:17:37 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>




# include <stdio.h>

typedef struct	s_map_def
{
	int		line_numbers;
	int		line_length;
	int		map_chars;
	int		input_line_numbers;
	char	*mapdir;
	char	**map;
	char	available;
	char	obstacle;
	char	box;
}				t_map_def;




void			ft_putchar(char c);
void			ft_fputchar(char c);
void			ft_putstr(char *str);
void			ft_fputstr(char *str);
void			ft_clone_map(t_map_def *map_def);
void			ft_map_print(t_map_def map_def);
void			ft_map_chars(t_map_def *map_def);
void			ft_print_map(char **map, int rows);
t_map_def		ft_open_read(char *file, int *fd);
int				ft_bsq(char *file);
int				ft_str_is_printable(char str);
int				ft_validate_chars(t_map_def map_def);
int				ft_validate_one_line(t_map_def map_def);
int				ft_validate_lines(t_map_def map_def);
int				ft_map_check(t_map_def map_def);
char			*ft_strcpy(char *dest, char *src);
char			**map_check(char *file);


#endif


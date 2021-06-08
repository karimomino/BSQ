# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kamin <kamin@42abudhabi.ae>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/05 00:04:56 by lde-alen          #+#    #+#              #
#    Updated: 2021/06/07 23:21:45 by kamin            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		bsq

CC		=		gcc -o

SRC		=		src/main.c		\
				src/ft_prints.c	\
				src/ft_bsq.c	\
				src/ft_map.c	\
				src/map_check.c	\
				src/ft_string_manipulation.c	\


CFLAGS	+=		-Wall -Wextra -Werror

OBJ		=		$(SRC:.c=.o)

all: 			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(NAME) $(CFLAGS) $(OBJ)
clean:
				rm -f $(OBJ)

fclean: 		clean
				rm -f $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lde-alen <lde-alen@42abudhabi.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/05 00:04:56 by lde-alen          #+#    #+#              #
#    Updated: 2021/06/07 04:28:37 by lde-alen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		bsq

CC		=		gcc -o

SRC		=		src/main.c		\
				src/ft_prints.c	\
				src/ft_bsq.c	\
				src/ft_map.c


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

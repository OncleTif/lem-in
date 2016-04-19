# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/07 09:19:22 by tmanet            #+#    #+#              #
#    Updated: 2016/04/19 14:55:51 by tmanet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lem-in

CC = gcc

FLAGS = -Wall -Wextra -Werror

LIB = libft/libft.a

SRC =   main.c \
		ft_reader.c \
		ft_add_link.c \
		ft_com.c \
		ft_print_anthill.c \
		ft_print_input.c \
		ft_print_room.c \
		ft_print_path.c \
		ft_path_finder.c \
		ft_dijkstra.c \
		ft_line_reader.c \
		ft_room_finder.c \
		ft_add_room.c \
		ft_anthill_validator.c \


OBJ = $(SRC:.c=.o)

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	@$(CC) $(FLAGS) -o $(NAME) $(OBJ) $(LIB)
	@echo "COMPILATION de $(NAME)"

%.o: %.c $@
	@$(CC) $(FLAGS) -c $<
	@echo "compilation de $<"

clean:
	@make -C libft clean
	@echo "suppression des objets de la lib"
	@rm -rf $(OBJ)
	@echo "suppression des objets"

fclean: clean
	@make -C libft fclean
	@echo "suppression de la lib"
	@rm -rf $(NAME)
	@echo "suppression de $(NAME)"

re: fclean all

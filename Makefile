# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmanet <tmanet@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/07 09:19:22 by tmanet            #+#    #+#              #
#    Updated: 2016/03/25 12:59:51 by tmanet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

FLAGS = -Wall -Wextra -Werror

LIB = libft/libft.a

SRC =   main.c \
		ft_atolst.c \
		ft_print_stack_a.c \
		ft_ntry_init.c \
		ft_bubble_solve.c \
		ft_lstswap.c \
		ft_stck_init.c \
		sa.c \
		sb.c \
		ss.c \
		ft_lstrotate.c \
		ra.c \
		rb.c \
		rs.c \
		ft_lstrrotate.c \
		rra.c \
		rrb.c \
		rrs.c \
		pa.c \
		pb.c \
		ft_resolve_a.c \
		ft_resolve_back.c \
		ft_unoffset.c \
		ft_offset.c \
		ft_sortiness.c \
		ft_backtrack.c \
		ft_count_moves.c \
		ft_moves_del.c \
		ft_stck_copy.c \
		ft_stck_del.c \
		ft_moves_copy.c \
		ft_ntry_del.c \
		ft_sorted.c \
		ft_sorted_offset.c \
		ft_move.c \
		ft_stck_swap.c \
		ft_find_lst_move.c \
		ft_newmove.c \
		ft_lsntry_copy.c \
		ft_optimize_moves.c \
		ft_reduce.c \
		ft_freemove.c \
		ft_print.c \
		ft_print_first.c \
		ft_print_moves.c \
		ft_resolve.c \
		ft_range_finder.c \
		ft_push_b_to_a.c \
		ft_rotate_times.c \
		ft_rev_rotate_times.c \


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

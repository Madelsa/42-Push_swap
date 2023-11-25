# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahmoud <mahmoud@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/22 14:03:21 by mabdelsa          #+#    #+#              #
#    Updated: 2023/11/24 21:29:21 by mahmoud          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	push_swap.c ./input_validation/validate_input.c ./stack/stack_create_insert.c\
		./utils/stack_utils.c ./utils/utils.c ./input_validation/check_duplicates.c\
		./utils/free_memory.c ./stack_functions/push.c ./sorting/check_sorted.c\
		./stack_functions/rotate.c ./stack_functions/rev_rotate.c ./stack_functions/swap.c\
		./sorting/find_min_max.c ./sorting/set_targets.c ./sorting/set_index.c\
		./sorting/find_next_smallest_largest.c ./sorting/calc_push_cost.c\
		./sorting/calc_size_median.c ./sorting/find_cheapest_node.c\
		./sorting/sort_stack.c ./sorting/sort_leftover.c
		
NAME = push_swap
AR = ar rs
RM = rm -f
CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_P = ./libft/
LIBFT_AR = ./libft/libft.a

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(LIBFT_AR)
	$(CC) $(OBJS) $(LIBFT_AR) -o $(NAME)

$(LIBFT_AR):
	make -C $(LIBFT_P)

clean:
	make -C $(LIBFT_P) clean
	$(RM) $(OBJS)

fclean: clean
	make -C $(LIBFT_P) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re


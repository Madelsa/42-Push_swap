# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabdelsa <mabdelsa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/22 14:03:21 by mabdelsa          #+#    #+#              #
#    Updated: 2023/10/22 15:18:04 by mabdelsa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	push_swap.c
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


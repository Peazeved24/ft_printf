# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/02 15:27:34 by peazeved          #+#    #+#              #
#    Updated: 2025/05/08 16:13:14 by peazeved         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRCS =  ft_putstr.c ft_itoa.c ft_putchar.c ft_putunsnbr.c \
ft_strlen.c ft_hexa.c ft_hexaUp.c ft_putptr.c
OBJS = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	ar rcs  $@ $^

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@ 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
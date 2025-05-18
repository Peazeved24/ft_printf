# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: peazeved <peazeved@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/17 15:07:04 by peazeved          #+#    #+#              #
#    Updated: 2025/05/17 15:14:16 by peazeved         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libprinf.a
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = printftool.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY:all clean fclean re
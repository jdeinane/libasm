# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/04 15:26:07 by jubaldo           #+#    #+#              #
#    Updated: 2025/05/04 15:54:10 by jubaldo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a
NASM = nasm
NASMFLAGS = -f elf64

SRCS = ft_strlen.s
OBJS = $(SRCS:.s=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.s
	$(NASM) $(NASMFLAGS) -o $@ $<

main: $(NAME) main.c
	$(CC) $(CFLAGS) main.c -L. -lasm -o main

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME) main

re: fclean all
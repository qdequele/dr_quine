# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/15 14:57:05 by qdequele          #+#    #+#              #
#    Updated: 2017/10/17 10:16:17 by qdequele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#Define the program
NAME		=	Grace
SRC			=	Grace.c

OBJ			=	$(SRC:.c=.o)

CFLAGS		=	-Wall -Wextra -Werror

%.o: %.c
	@$gcc $(CFLAGS) -c $< -o $@ $(INCLUDES)

all: $(NAME)

$(NAME): $(OBJ)
	@gcc $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\x1b[32m------------------- $(NAME) -------------------\x1b[0m"

clean:
	@/bin/rm -rf $(OBJ) $(NAME)_*.o
	@echo "\x1b[33m------------------- $(NAME) -------------------\x1b[0m"

fclean: clean
	@/bin/rm -rf $(NAME) $(NAME)_*.c
	@echo "\x1b[31m------------------- $(NAME) -------------------\x1b[0m"

re: fclean all
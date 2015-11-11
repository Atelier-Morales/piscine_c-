# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmorales <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/11 16:29:40 by fmorales          #+#    #+#              #
#    Updated: 2015/11/11 16:29:42 by fmorales         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp
FLAGS = -Wall -Wextra -Werror
NAME = serialize

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

re: fclean all
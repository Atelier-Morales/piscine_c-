# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmorales <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/12 14:43:33 by fmorales          #+#    #+#              #
#    Updated: 2015/11/12 14:43:34 by fmorales         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = whatever.cpp
FLAGS = -Wall -Wextra -Werror
NAME = whatever

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

re: fclean all
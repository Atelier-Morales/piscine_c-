# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmorales <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/04 11:15:08 by fmorales          #+#    #+#              #
#    Updated: 2015/11/04 11:15:09 by fmorales         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp
NAME = replace
FLAGS = -Wall -Wextra -Werror -Wno-unused

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmorales <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/11 11:00:09 by fmorales          #+#    #+#              #
#    Updated: 2015/11/11 11:00:11 by fmorales         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Scalar.cpp
FLAGS = -Wall -Wextra -Werror
NAME = convert

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

re: fclean all
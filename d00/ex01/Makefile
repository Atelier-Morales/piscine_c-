# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmorales <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/02 16:32:56 by fmorales          #+#    #+#              #
#    Updated: 2015/11/02 17:11:14 by fmorales         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = phoneBook.cpp \
	  main.cpp
NAME = phoneBook
FLAGS = -Wall -Wextra -Werror -Wno-unused

all: $(NAME)

$(NAME):
	g++ $(FLAGS) -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

re: fclean all

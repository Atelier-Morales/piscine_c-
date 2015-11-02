# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmorales <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/02 15:28:07 by fmorales          #+#    #+#              #
#    Updated: 2015/11/02 16:10:18 by fmorales         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp
FLAGS = -Wall -Wextra -Werror
NAME = megaphone

all: $(NAME)

$(NAME):
	g++ $(FLAGS) -o $(NAME) $(SRC)

fclean:
	rm -f $(NAME)

re: fclean all

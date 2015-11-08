#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmorales <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/08 21:18:50 by fmorales          #+#    #+#              #
#    Updated: 2015/11/08 21:18:58 by fmorales         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_retro
FILE =	main.cpp \
		Player.cpp \
		Enemy.cpp \
		Fire.cpp	\
		Background.cpp \
		FireEnemy.cpp

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	g++ $(FLAG) $(FILE) -o $(NAME) -lcurses

clean:
	rm -rf $(NAME)

re: clean all
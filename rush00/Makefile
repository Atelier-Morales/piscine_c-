NAME = ft_retro
FILE =	main.cpp \
		Player.cpp \
		Enemy.cpp

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	g++ $(FLAG) $(FILE) -o $(NAME) -lcurses

clean:
	rm -rf $(NAME)

re: clean all
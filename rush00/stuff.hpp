#ifndef STUFF_H
# define STUFF_H
# include <unistd.h>
# include <stdlib.h>
# include <curses.h>
# include <stdio.h>
# include <fcntl.h>
# include <strings.h>
# include <sstream>
// #include <time>
# include <cstdlib>


typedef struct s_win {

	WINDOW* win;
	WINDOW* score;
}			t_win;

#endif
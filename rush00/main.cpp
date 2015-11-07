#include "stuff.hpp"
#include "Player.hpp"
#include "Enemy.hpp"

std::string intToString(int i)
{
    std::stringstream ss;
    std::string s;
    ss << i;
    s = ss.str();

    return s;
}

void ft_move_right_enemy(Enemy b[], int army, int *direction) {

	int i = 0;
	while (i < army)
		i++;
	i--;
	if (b[i].getPosY() + 7 > b[i].getMaxY() && *direction == 0) {
		i = 0;
		while (i < army) {
			b[i].setPosX(b[i].getPosX() + 1);
			i++;
		}
		*direction = 1;
		return ;
	}
	i = 0;
	if (b[i].getPosY() - 5 <= 0 && *direction == 1) {
		i = 0;
		while (i < army) {
			b[i].setPosX(b[i].getPosX() + 1);
			i++;
		}
		*direction = 0;
		return ;
	}
	i = 0;
	while(i < army) {
		if (*direction == 1)
			b[i].setPosY(b[i].getPosY() - 3);
		else
			b[i].setPosY(b[i].getPosY() + 3);
		i++;
	}
}


void ft_display_enemy(Enemy b[], t_win *w, int army) {
	int i = 0;

	while(i < army) {
		mvwprintw(w->win, b[i].getPosX(), b[i].getPosY(), b[i].getName().c_str());
		// wrefresh(w->score);
		wrefresh(w->win);
		i++;
	}
	return ;
}

void ft_enemy_check(Enemy b[], Player a, int army, t_win *w) {
	int i = 0;
	while (i < army) {
		if (b[i].getPosX() == a.getPosX())// || b[i].getPosX() - 1 == a.getPosX() ) //&& b[i].getPosY() == a.getPosY()) {
		{
			mvwprintw(w->win, 5, 5, "LOL");
			wrefresh(w->win);
			std::exit(0);
		}
		i++;
	}
}

int main()
{
	t_win w;

	int c;
	int direction = 0;

	initscr();
	curs_set(0);
	cbreak();
	noecho();
	nodelay(stdscr, TRUE);
	keypad(stdscr, TRUE);
	// srand(NULL);
	Player a;
	Enemy *b;
	int army = 0;
	int i = 0;
	if (a.getLevel() == 0)
		army = 5;
//	int wave = 3;
	b = new Enemy[army];

	while (i < army) {
		b[i].setPosY(10 * (i + 1));
		b[i].setMaxX(LINES - 2);
		b[i].setMaxY(COLS - 2);
		i++;
	}
	w.win = subwin(stdscr, LINES * 0.9, COLS, LINES * 0.1, 0);
	w.score = subwin(stdscr, LINES * 0.1, COLS, 0, 0);
	box(w.win, ACS_VLINE, ACS_HLINE);
	box(w.score, ACS_VLINE, ACS_HLINE);

	a.setPosX(LINES - 10);
	a.setPosY(COLS / 2);
	a.setMaxX(LINES - 1);
	a.setMaxY(COLS - 3);

	mvwprintw(w.score, 1, 5, "SCORE : ");
	std::string score_display = std::to_string(a.getScore());
	mvwprintw(w.score, 1, 14, score_display.c_str());
	wrefresh(w.score);

	mvwprintw(w.score, 1, COLS - 15, "LIFE : ");
	std::string life_display = std::to_string(a.getLife());
	mvwprintw(w.score, 1, COLS - 8, life_display.c_str());
	wrefresh(w.score);


	mvwprintw(w.win, a.getPosX(), a.getPosY(), "/.\\");
	// wrefresh(w.score);
	wrefresh(w.win);

	int n_time = time(NULL);
	// int wave = 0;
	i = 10;
	while (1) {
		if (a.getLife() == 0) {
			clear();
			endwin();
			std::cout<<"GAME OVER"<<std::endl;
			std::exit(0);
		}
		// if (wave == 3) {

		// }
		if (n_time != time(NULL)) {
			ft_move_right_enemy(b, army, &direction);
			ft_enemy_check(b, a, army, &w);
			wclear(w.win);
			box(w.win, ACS_VLINE, ACS_HLINE);
			mvwprintw(w.win, a.getPosX(), a.getPosY(), "/.\\");
			ft_display_enemy(b, &w, army);
			n_time = time(NULL);
			// wave++;
		// 	i++;
		}
		if ((c = getch()) != ERR) {
			if (c == 27) {
				clear();
				endwin();
				std::exit(0);
			}
			if (c == 97 || c == KEY_LEFT) {
				if (a.getPosY() > 2) {
					a.setPosY(a.getPosY() - 2);
					ft_enemy_check(b, a, army, &w);
					wclear(w.win);
					box(w.win, ACS_VLINE, ACS_HLINE);
					ft_display_enemy(b, &w, army);
					mvwprintw(w.win, a.getPosX(), a.getPosY(), "/.\\");
					wrefresh(w.win);
				}
			}
			if (c == 100 || c == KEY_RIGHT) {
				if (a.getPosY() < a.getMaxY()) {
					a.setPosY(a.getPosY() + 2);
					ft_enemy_check(b, a, army, &w);
					wclear(w.win);
					box(w.win, ACS_VLINE, ACS_HLINE);
					ft_display_enemy(b, &w, army);
					mvwprintw(w.win, a.getPosX(), a.getPosY(), "/.\\");
					wrefresh(w.win);
				}
			}
			if (c == KEY_UP) {
				if (a.getPosX() - 5 > 0) {
					a.setPosX(a.getPosX() - 1);
					ft_enemy_check(b, a, army, &w);
					wclear(w.win);
					box(w.win, ACS_VLINE, ACS_HLINE);
					ft_display_enemy(b, &w, army);
					mvwprintw(w.win, a.getPosX(), a.getPosY(), "/.\\");
					wrefresh(w.win);
				}
			}
			if (c == KEY_DOWN) {
				if (a.getPosX() + 5 < a.getMaxX()) {
					a.setPosX(a.getPosX() + 1);
					ft_enemy_check(b, a, army, &w);
					wclear(w.win);
					box(w.win, ACS_VLINE, ACS_HLINE);
					ft_display_enemy(b, &w, army);
					mvwprintw(w.win, a.getPosX(), a.getPosY(), "/.\\");
					wrefresh(w.win);
				}
			}
			if (c == 32) {
				std::string aX = std::to_string(a.getPosX());
				std::string aY = std::to_string(a.getPosY());
				std::string bX = std::to_string(b[0].getPosX());
				std::string bY = std::to_string(b[0].getPosY());
				mvwprintw(w.win, LINES - 10, COLS / 2, aX.c_str());
				mvwprintw(w.win, LINES - 11, COLS / 2, aY.c_str());
				mvwprintw(w.win, LINES - 12, COLS / 2, bX.c_str());
				mvwprintw(w.win, LINES - 13, COLS / 2, bY.c_str());			

					mvwprintw(w.win, LINES - 10, COLS / 2, "ATTACK");
				wrefresh(w.win);
				sleep(3);
			}
		}
	}
	return 0;
}
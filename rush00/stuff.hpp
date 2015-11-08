// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   stuff.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/08 21:20:06 by fmorales          #+#    #+#             //
//   Updated: 2015/11/08 21:20:10 by fmorales         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

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

# define SCUD 200
# define KRR 200
# define ARMY 1000
# define WAVE 10

typedef struct s_win {

	WINDOW* win;
	WINDOW* score;
}			t_win;

#endif

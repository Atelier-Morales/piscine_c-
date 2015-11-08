/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Background.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/08 21:16:35 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/08 21:16:38 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BACKGROUND_HPP
# define BACKGROUND_HPP
#include <iostream>
#include <curses.h>
#include "stuff.hpp"

class Background
{
public:
    Background(int x_max, int y_max);
    ~Background(void);
    void    move(void);
    void    refresh(void);

private:
    int                *tabx;
    int                *taby;
    int                xmax;
    int                ymax;
	Background( void );
	Background  & operator=( Background const & rhs );
    Background( Background const & src );
};
#endif

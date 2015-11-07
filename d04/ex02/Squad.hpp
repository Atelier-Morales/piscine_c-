/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 22:34:19 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 22:34:20 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ISquad.hpp"

#ifndef SQUAD_HPP
# define SQUAD_HPP

class Squad : virtual public ISquad {
public:
	Squad(Squad const & src);
	virtual ~Squad();

	Squad const &	operator=(Squad const & rhs);
	int 			getCount() const;
	ISpaceMarine*	getUnit(int) const;
	int 			push(ISpaceMarine*);

protected:
	int				_nb;

private:
	Squad();

};

#endif
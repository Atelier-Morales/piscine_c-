/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 22:33:59 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 22:34:00 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

class ISquad {
public:
	virtual 	~ISquad() {}
	virtual 	int getCount() const = 0;
	virtual 	ISpaceMarine* getUnit(int unit) const = 0;
	virtual 	int push(ISpaceMarine *marine) = 0;
};

#endif
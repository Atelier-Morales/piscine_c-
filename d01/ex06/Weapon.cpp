/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 11:14:17 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/04 11:14:18 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string const &type) : _type(type) {
	return ;
}

Weapon::~Weapon() {
	return ;
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}

std::string const	&Weapon::getType() const {
	return this->_type;
}

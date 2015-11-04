/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 11:13:59 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/04 11:14:01 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	return ;
}

HumanB::~HumanB() {
	return ;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
	return ;
}

void	HumanB::attack() const {
	std::cout << this->_name << " attacks with the " << this->_weapon->getType() << std::endl;
	return ;
}

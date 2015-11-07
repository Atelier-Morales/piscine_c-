/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 20:19:12 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 20:19:14 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
	return ;
}

PowerFist::PowerFist(PowerFist const & src) : AWeapon(src) {
	return ;
}

PowerFist::~PowerFist() {
	return ;
}

PowerFist const &	PowerFist::operator=(PowerFist const & rhs) {
	AWeapon::operator=(rhs);
	return (*this);
}

void				PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}
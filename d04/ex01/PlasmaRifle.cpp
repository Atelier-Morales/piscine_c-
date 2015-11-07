/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 20:18:57 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 20:18:59 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) : AWeapon(src) {
	return ;
}

PlasmaRifle::~PlasmaRifle() {
	return ;
}

PlasmaRifle const &	PlasmaRifle::operator=(PlasmaRifle const & rhs) {
	AWeapon::operator=(rhs);
	return (*this);
}

void				PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return ;
}
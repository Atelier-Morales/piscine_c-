/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 20:18:04 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 20:18:06 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AWeapon.hpp"

AWeapon::AWeapon(AWeapon const & src) {
	*this = src;
	return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _cost(apcost), _damage(damage) {
	return ;
}
AWeapon::~AWeapon() {
	return ;
}

AWeapon const &			AWeapon::operator=(AWeapon const & rhs) {
	this->_name = rhs.getName();
	this->_cost = rhs.getAPCost();
	this->_damage = rhs.getDamage();
	return (*this);
}

std::string const &		AWeapon::getName() const {
	return (this->_name);
}

int 					AWeapon::getAPCost() const {
	return (this->_cost);
}

int 					AWeapon::getDamage() const {
	return (this->_damage);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 20:18:23 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 20:18:25 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "AWeapon.hpp"

Character::Character(Character const & src) {
	*this = src;
	return ;
}

Character::~Character() {
	return ;
}

Character::Character(std::string const & name) : _name(name), _ap(40), weapon(NULL) {
	return ;
}

Character const &	Character::operator=(Character const & rhs) {
	this->_name = rhs._name;
	this->_ap = rhs._ap;
	return (*this);
}

void				Character::recoverAP() {
	if (this->_ap > 30) {
		this->_ap = 40;
		return ;
	}
	this->_ap += 10;
	return ;
}

void				Character::equip(AWeapon *weapon) {
	this->weapon = weapon;
	return ;
}

void				Character::attack(Enemy *enemy) {
	if (this->_ap <= 0 || !this->weapon)
		return ;
	std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
	this->_ap -= this->weapon->getAPCost();
	enemy->takeDamage(this->weapon->getDamage());
	this->weapon->attack();
	if (enemy->getHP() == 0)
		delete enemy;
	return ;
}

std::string const &		Character::getWeaponName() const {
	return (this->weapon->getName());
}

AWeapon					*Character::getWeapon() const {
	return (weapon);
}

int						Character::getAP() const {
	return (this->_ap);
}

std::string const &		Character::getName() const {
	return (this->_name);
}

std::ostream &			operator<<(std::ostream & out, Character const & in) {
	if (in.getWeapon() == NULL)
		out << in.getName() << " has " << in.getAP() << " AP and is unarmed" << std::endl;
	else	
		out << in.getName() << " has " << in.getAP() << " AP and wields a " << in.getWeaponName() << std::endl;
	return out;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 16:03:45 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/06 16:03:46 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const & name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _level(1), _name(name), _meleeDamage(20), _rangedDamage(15), _armorDamageReduction(3){
	std::cout << "CL4P-TP :" << _name << " -- start bootup sequence." << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "CL4P-TP :" << _name << " -- start bootup sequence." << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "CL4P-TP JUST SHUT DOWN!" << std::endl;
	return ;
}

ClapTrap const &	ClapTrap::operator=(ClapTrap const & rhs) {
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_level = rhs._level;
	this->_name = rhs._name;
	this->_meleeDamage = rhs._meleeDamage;
	this->_rangedDamage = rhs._rangedDamage;
	this->_armorDamageReduction = rhs._armorDamageReduction;
	return (*this);
}

void		ClapTrap::rangedAttack(std::string const & target) {
	std::cout << "CL4P-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedDamage << " points of damage !" << std::endl;
	return ;
}

void		ClapTrap::meleeAttack(std::string const & target) {
	std::cout << "CL4P-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeDamage << " points of damage !" << std::endl;
	return ;
}

void		ClapTrap::takeDamage(unsigned int amount) {
 	if (amount <= this->_armorDamageReduction)
 		return ;
 	amount -= this->_armorDamageReduction;
 	if (amount < this->_hitPoints) {
 		std::cout << "That looks like it hurts! I just lost " << amount << " HP!" << std::endl;
 		this->_hitPoints -= amount;
 		std::cout << this->_hitPoints << " HP!" << std::endl;
 	}
 	else {
 		this->_hitPoints = 0;
 		std::cout << amount << " DAMAGES ! I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
 		std::cout << this->_hitPoints << " HP!" << std::endl;
 	}
 	return ;
}

void		ClapTrap::beRepaired(unsigned int amount) {
 	std::cout << "Sweet life juice!" << std::endl;
 	if (this->_hitPoints + amount > this->_maxHitPoints) {
 		this->_hitPoints = this->_maxHitPoints;
 		std::cout << this->_hitPoints << " HP!" << std::endl;
 	}
 	else {
 		
 		this->_hitPoints += amount;
 		std::cout << this->_hitPoints << " HP!" << std::endl;
 	}
 	return ;
 }
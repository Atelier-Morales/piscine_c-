/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 14:44:34 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/06 14:44:36 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const & name) : ClapTrap(name) {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_name = name;
	_meleeDamage = 20;
	_rangedDamage = 15;
	_armorDamageReduction = 3;
	std::cout << "SC4V-TP :" << _name << " -- start bootup sequence." << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src._name) {
	std::cout << "SC4V-TP :" << _name << " -- start bootup sequence." << std::endl;
	*this = src;
	return ;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "DAMN I'M DEAD!" << std::endl;
	return ;
}

ScavTrap const & 	ScavTrap::operator=(ScavTrap const & rhs) {
	ClapTrap::operator=(rhs);
	return (*this);
}

void		ScavTrap::challengeNewcomer(std::string const & target) {
 	if (this->_energyPoints < 25) {
 		std::cout << "it's out of energy !" << std::endl;
 		return ;
 	}
 	int 			random 	= std::rand() % 5;
	std::string		attacks[] = {
		"I challenge you to eat your hand!", 
		"I challenge you to cut your cock!", 
		"I challenge you to drink nothing but blood for 2 weeks!", 
		"I challenge you to find a goal in your life!", 
		"I bet you are not capable of shitting with your mouth!"
	};
	std::string attack = attacks[random];
	std::cout << "Hey " << target << "! " << attack << std::endl;
	this->_energyPoints -= 25;
}
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
#include "FragTrap.hpp"

ScavTrap::ScavTrap(std::string const & name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(50), _maxEnergyPoints(50), _level(1), _name(name), _meleeDamage(20), _rangedDamage(15), _armorDamageReduction(3){
	std::cout << "SC4V-TP :" << _name << " -- start bootup sequence." << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
	std::cout << "SC4V-TP :" << _name << " -- start bootup sequence." << std::endl;
	*this = src;
	return ;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "DAMN I'M DEAD!" << std::endl;
	return ;
}

ScavTrap & 	ScavTrap::operator=(ScavTrap const & rhs) {
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

void		ScavTrap::rangedAttack(std::string const & target) {
 	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedDamage << " points of damage !" << std::endl;
 }

  void		ScavTrap::meleeAttack(std::string const & target) {
 	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeDamage << " points of damage !" << std::endl;
 }

 void		ScavTrap::takeDamage(unsigned int amount) {
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

 void		ScavTrap::beRepaired(unsigned int amount) {
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
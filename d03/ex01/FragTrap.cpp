/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 10:04:28 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/06 10:04:29 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const & name) : _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100), _level(1), _name(name), _meleeDamage(30), _rangedDamage(20), _armorDamageReduction(5) {
	std::cout << "FR4G-TP :" << _name << " -- start bootup sequence." << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & frag) {
	std::cout << "FR4G-TP -- start bootup sequence." << std::endl;
	*this = frag;
	return ;
}

FragTrap::FragTrap() {
	return ;
}

FragTrap::~FragTrap() {
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
	return ;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs) {
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

 void		FragTrap::rangedAttack(std::string const & target) {
 	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedDamage << " points of damage !" << std::endl;
 }

  void		FragTrap::meleeAttack(std::string const & target) {
 	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeDamage << " points of damage !" << std::endl;
 }

 void		FragTrap::takeDamage(unsigned int amount) {
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

 void		FragTrap::beRepaired(unsigned int amount) {
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

 void		FragTrap::vaulthunter_dot_exe(std::string const & target) {
 	if (this->_energyPoints < 25) {
 		std::cout << "it's out of energy !" << std::endl;
 		return ;
 	}
 	int 			random 	= std::rand() % 5;
	std::string		attacks[] = {
		"This time it'll be awesome, I promise!", 
		"Hey everybody, check out my package!", 
		"Recompiling my combat code!", 
		"Defragmenting!", 
		"Place your bets!"
	};
	std::string attack = attacks[random];
	std::cout << "Hey " << target << "! " << attack << std::endl;
	this->_energyPoints -= 25;
 }
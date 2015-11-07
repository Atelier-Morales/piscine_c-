/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 16:19:33 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 16:19:37 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const & name) : ClapTrap(name), FragTrap(name), NinjaTrap(name) {
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = name;
	this->_meleeDamage = 60;
	this->_rangedDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "SUP3R-TP :" << _name << " -- start bootup sequence." << std::endl;
	return ;
}

SuperTrap::SuperTrap(SuperTrap const & src) : ClapTrap(src._name), FragTrap(src._name), NinjaTrap(_name) {
	std::cout << "SUP3R-TP :" << _name << " -- copying bootup sequence." << std::endl;
	*this = src;
	return ;
}

SuperTrap::~SuperTrap(void) {
	std::cout << "WHY KILL SUCH A NICE TRAP??" << std::endl;
	return ;
}

SuperTrap const &	SuperTrap::operator=(SuperTrap const & rhs) {
	ClapTrap::operator=(rhs);
	return (*this);
}

void		SuperTrap::rangedAttack(std::string const & target) {
 	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedDamage << " points of damage !" << std::endl;
}

void		SuperTrap::meleeAttack(std::string const & target) {
	std::cout << "N1NJ4-TP " << this->_name << " slashing " << target << " multiple times inflicting " << this->_meleeDamage << " points of damage !" << std::endl;
	return ;
}

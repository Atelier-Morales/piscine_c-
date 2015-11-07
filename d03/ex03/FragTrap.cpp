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

FragTrap::FragTrap(std::string const & name) : ClapTrap(name) {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_name = name;
	_meleeDamage = 30;
	_rangedDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "FR4G-TP :" << _name << " -- start bootup sequence." << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & frag) : ClapTrap(frag._name) {
	std::cout << "FR4G-TP -- start bootup sequence." << std::endl;
	*this = frag;
	return ;
}

FragTrap::~FragTrap() {
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
	return ;
}

FragTrap const &	FragTrap::operator=(FragTrap const & rhs) {
	ClapTrap::operator=(rhs);
	return (*this);
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
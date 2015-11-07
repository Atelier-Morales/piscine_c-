/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 13:39:59 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 13:40:01 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string const & name) : ClapTrap(name) {
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_name = name;
	_meleeDamage = 60;
	_rangedDamage = 5;
	_armorDamageReduction = 0;
	std::cout << "N1NJ4-TP :" << _name << " -- start bootup sequence." << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap(src._name) {
	*this = src;
	return ;
}

NinjaTrap::~NinjaTrap(void){
	std::cout << "It is an honour to die for the Emperor..." << std::endl;
	return ;
}

NinjaTrap const & 	NinjaTrap::operator=(NinjaTrap const & rhs) {
	ClapTrap::operator=(rhs);
	return (*this);
}

void				NinjaTrap::rangedAttack(std::string const & target) {
	std::cout << "N1Nj4-TP " << this->_name << " throwing daggers at " << target << " inflicting " << this->_rangedDamage << " points of damage !" << std::endl;
	return ;
}

void				NinjaTrap::meleeAttack(std::string const & target) {
	std::cout << "N1NJ4-TP " << this->_name << " slashing " << target << " multiple times inflicting " << this->_meleeDamage << " points of damage !" << std::endl;
	return ;
}

void				NinjaTrap::ninjaShoebox(NinjaTrap & src) {
	std::cout << "HEYA THIS IS A NICE LOOKING N1NJ4-TP...LET ME SHOW YOU OUR SKILLS" << std::endl;
	src.takeDamage(4);
	std::cout << "OUCH, I THINK I HURT MYSELF" << std::endl;
	return ;
}

void				NinjaTrap::ninjaShoebox(ClapTrap & src) {
	std::cout << "HERE'S SOME VICKS VAPORUB FOR YOU, LITTLE BUDDY" << std::endl;
	src.beRepaired(4);
	return ;
}

void				NinjaTrap::ninjaShoebox(FragTrap & src) {
	std::cout << "YOUR MOTHER IS MINE NOW" << std::endl;
	src.vaulthunter_dot_exe("ta maman");
	return ;
}

void				NinjaTrap::ninjaShoebox(ScavTrap & src) {
	std::cout << "hey little buddy, you will not run away from me !" << std::endl;
	src.challengeNewcomer("little buddy");
	return ;
}

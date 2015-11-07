/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 20:19:51 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 20:19:52 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperMutant.hpp"

SuperMutant::SuperMutant(SuperMutant const & src) : Enemy(src) {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant"){
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}
SuperMutant::~SuperMutant() {
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

SuperMutant const &			SuperMutant::operator=(SuperMutant const & rhs) {
	Enemy::operator=(rhs);
	return (*this);
}

void						SuperMutant::takeDamage(int i) {
	Enemy::takeDamage(i - 3);
	return ;
}
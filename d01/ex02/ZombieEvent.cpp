/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 16:07:19 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/03 16:07:20 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent(void) {
	return ;
}

ZombieEvent::~ZombieEvent(void) {
	return ;
}

void	ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
	return ;
}

Zombie* ZombieEvent::newZombie(std::string name) {
	Zombie *clone = new Zombie(name);
	return (clone);
}

Zombie*	ZombieEvent::randomChump(void) {
	int 			random 	= std::rand() % 10;
	std::string		names[] = {
		"Jean-Michel", "Patrick", "Gérard", "Jean-Marie", "Roger",
		"Jean-Guy", "Jean-Louis", "Michel", "Emile Louis", "Abdelkader"
	};
	std::string name = names[random];
	Zombie*	clone = this->newZombie(name);
	clone->setType(this->_type);
	clone->announce();
	return (clone);
}
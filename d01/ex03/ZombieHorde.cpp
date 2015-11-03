/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 17:57:38 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/03 17:57:40 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int N) : _nbZombies(N) {
	_zombie = new Zombie[N];
	setZombieType("Crawler");
	asignNames();
	return ;
}

ZombieHorde::~ZombieHorde() {
	delete [] _zombie;
}

void	ZombieHorde::setZombieType(std::string type) {
	this->_type = type;
	return ;
}

Zombie* ZombieHorde::newZombie() {
	Zombie *clone = new Zombie();
	return (clone);
}

void	ZombieHorde::asignNames(void) {
	int 			random;
	std::string 	name;
	std::string		names[] = {
		"Jean-Michel", "Patrick", "Gérard", "Jean-Marie", "Roger",
		"Jean-Guy", "Jean-Louis", "Michel", "Emile Louis", "Abdelkader"
	};
	for (int i = 0; i < this->_nbZombies; ++i) {
		random = std::rand() % 10;
		name = names[random];
		this->_zombie[i].setType(this->_type);
		this->_zombie[i].setName(name);
		this->_zombie[i].announce();
	}
	return ;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 17:57:05 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/03 17:57:06 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() {
	return ;
}

Zombie::~Zombie(void) {
	std::cout << this->_name << " was killed" << std::endl;
	return ;
}

void	Zombie::announce(void) const {
	std::cout << "<" << this->_name << " (" << this->_type << ")> " << "Braiiiiiiinnnssss..." << std::endl;
	return ;
}

void	Zombie::setType(std::string type) {
	this->_type = type;
	return ;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
	return ;
}
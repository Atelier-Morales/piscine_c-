/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 16:06:40 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/03 16:06:42 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
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
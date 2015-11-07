/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 18:04:35 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 18:04:36 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Peon.hpp"
#include "Victim.hpp"

Peon::Peon(std::string const & name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon(Peon const & src) : Victim(src) {
	std::cout << "Some random Peon called " << _name << " just popped !" << std::endl;
	return ;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon const &	Peon::operator=(Peon const & rhs) {
	Victim::operator=(rhs);
	return (*this);
}

std::string const &	Peon::getName() const {
	return (this->_name);
}

void 				Peon::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
	return ;
}
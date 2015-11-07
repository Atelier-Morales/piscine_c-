/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 18:03:21 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 18:03:24 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Victim.hpp"

Victim::Victim(std::string const & name) : _name(name) {
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
	return ;
}

Victim::Victim(Victim const & src) {
	*this = src;
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
	return ;
}

Victim::~Victim() {
	std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
	return ;
}

Victim const &	Victim::operator=(Victim const & rhs) {
	this->_name = rhs._name;
	return (*this);
}

std::ostream &	operator<<(std::ostream & out, Victim const & in) {
	out << "I'm " << in.getName() << " and I like otters !" << std::endl;
	return out;
}

std::string const &	Victim::getName() const {
	return (this->_name);
}

void 				Victim::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
	return ;
}


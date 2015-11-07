/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 18:02:38 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 18:02:42 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"

Sorcerer::Sorcerer(std::string const & name, std::string const & title) : _name(name), _title(title) {
	std::cout << _name << ", " << title << ", is born !" << std::endl;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const & src) {
	*this = src;
	return ;
}

Sorcerer::~Sorcerer() {
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
	return ;
}

Sorcerer const &	Sorcerer::operator=(Sorcerer const & rhs) {
	this->_name = rhs._name;
	this->_title = rhs._title;
	return (*this);
}

std::string const &	Sorcerer::getName() const {
	return (this->_name);
}

std::string const &	Sorcerer::getTitle() const {
	return (this->_title);
}

std::ostream &	operator<<(std::ostream & out, Sorcerer const & in) {
	out << "I am " << in.getName() << ", " << in.getTitle() << ", and I like ponies !" << std::endl;
	return out;
}

void 				Sorcerer::polymorph(Victim const & victim) const {
	victim.getPolymorphed();
	return ;
}

void 				Sorcerer::polymorph(Peon const & peon) const {
	peon.getPolymorphed();
	return ;
}

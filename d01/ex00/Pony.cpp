/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 15:07:55 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/03 15:07:56 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string name) : _name(name) {
	std::cout << "Pony " << this->_name << " is born!" << std::endl;
	return ;
}

Pony::~Pony(void) {
	std::cout << "Pony " << this->_name << " was killed!" << std::endl;
	return ;
}

void	Pony::setPony(std::string age, std::string type, std::string color) {
	this->_age = age;
	this->_type = type;
	this->_color = color;
	return ;
}

void	Pony::ponySpeech() const {
	std::cout << "Hello, I am " << this->_name ;
	std::cout << " and I am " << this->_age << " years old." << std::endl; 
	std::cout << "I am a pony of " << this->_type << " origin ";
	std::cout << "and my color is " << this->_color << std::endl;
	return;
}
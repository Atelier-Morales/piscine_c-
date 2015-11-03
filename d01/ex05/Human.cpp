/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 19:14:30 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/03 19:14:31 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"
#include "Human.hpp"

Human::Human() {
	_brain = Brain();
	return ;
}

Human::~Human() {
	return ;
}

std::string	Human::identify() const {
	return this->_brain.identify();
}

Brain		Human::getBrain() const {
	return this->_brain;
}
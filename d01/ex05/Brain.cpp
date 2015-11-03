/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 19:14:10 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/03 19:14:11 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain() : _address("0x194F87EA") {
	return ;
}

Brain::~Brain() {
	return ;
}

std::string	Brain::identify() const {
	return this->_address;
}
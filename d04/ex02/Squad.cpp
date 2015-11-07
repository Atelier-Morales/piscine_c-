/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 22:34:08 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 22:34:10 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Squad.hpp"

Squad::Squad(Squad const & src) {
	*this = src;
	return;
}

Squad::~Squad() {
	return ;
}

Squad const &	Squad::operator=(Squad const & rhs) {
	this->_nb = rhs.getCount();
	return *this;
}
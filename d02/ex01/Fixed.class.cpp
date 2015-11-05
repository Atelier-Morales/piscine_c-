/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 15:06:34 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/05 15:06:36 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.class.hpp"

Fixed::Fixed(void) : _fixedValue(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const i) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixedValue = i << this->_fractBits;
	return ;
}

Fixed::Fixed(float const f) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixedValue = roundf(f * (1 << _fractBits));
	return ;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}
int		Fixed::toInt(void) const {
	return (this->_fixedValue >> _fractBits);
}

float	Fixed::toFloat(void) const {
	return ((float)this->_fixedValue / (1 << _fractBits));
}

int		Fixed::getRawBits(void) const {
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedValue = raw;
	return ;
}

Fixed &	Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs)
		this->_fixedValue = rhs.getRawBits();

	return (*this);
}

std::ostream &	operator<<(std::ostream & out, Fixed const & in) {
	out << in.toFloat();
	return (out);
}

const int	Fixed::_fractBits = 8;
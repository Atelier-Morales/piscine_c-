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
	return ;
}

Fixed::Fixed(int const i) {
	this->_fixedValue = i << this->_fractBits;
	return ;
}

Fixed::Fixed(float const f) {
	this->_fixedValue = roundf(f * (1 << _fractBits));
	return ;
}

Fixed::Fixed(Fixed const & src) {
	*this = src;
	return ;
}

Fixed::~Fixed(void) {
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

bool	Fixed::operator==(Fixed const & rhs) const {
	if (this->toFloat() == rhs.toFloat())
		return true;
	return false;
}

bool	Fixed::operator!=(Fixed const & rhs) const {
	if (this->toFloat() != rhs.toFloat())
		return true;
	return false;
}

bool	Fixed::operator<=(Fixed const & rhs) const {
	if (this->toFloat() <= rhs.toFloat())
		return true;
	return false;
}

bool	Fixed::operator>=(Fixed const & rhs) const {
	if (this->toFloat() >= rhs.toFloat())
		return true;
	return false;
}

bool	Fixed::operator<(Fixed const & rhs) const {
	if (this->toFloat() < rhs.toFloat())
		return true;
	return false;
}

bool	Fixed::operator>(Fixed const & rhs) const {
	if (this->toFloat() > rhs.toFloat())
		return true;
	return false;
}

Fixed	Fixed::operator*(Fixed const & rhs) {
	return Fixed((this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & rhs) {
	return Fixed((this->toFloat() / rhs.toFloat()));
}

Fixed	Fixed::operator+(Fixed const & rhs) {
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const & rhs) {
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed &	Fixed::operator=(Fixed const & rhs) {
	if (this != &rhs)
		this->_fixedValue = rhs.getRawBits();

	return (*this);
}

Fixed & Fixed::operator++(void) {
	// Operator Function Definition for prefix
	this->_fixedValue++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	// Operator Function Definition with dummy argument for postfix
	Fixed f(*this);
	this->_fixedValue++;
	return (f);
}

Fixed & Fixed::operator--(void) {
	// Operator Function Definition for prefix
	this->_fixedValue--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	// Operator Function Definition with dummy argument for postfix
	Fixed f(*this);
	this->_fixedValue--;
	return (f);
}

std::ostream &	operator<<(std::ostream & out, Fixed const & in) {
	out << in.toFloat();
	return (out);
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b) {
	if (a == b)
		return a;
	else if (a < b)
		return a;
	return b;
}

Fixed const & Fixed::min(Fixed & a, Fixed & b) {
	if (a == b)
		return a;
	else if (a < b)
		return a;
	return b;
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b) {
	if (a == b)
		return a;
	else if (a > b)
		return a;
	return b;
}

Fixed const & Fixed::max(Fixed & a, Fixed & b) {
	if (a == b)
		return a;
	else if (a > b)
		return a;
	return b;
}

const int	Fixed::_fractBits = 8;
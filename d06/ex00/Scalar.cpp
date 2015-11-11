/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/11 12:15:24 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/11 12:15:26 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits>
#include <iostream>
#include <iomanip>
#include <sstream>
#include "Scalar.hpp"

Scalar::Scalar() {
	return ;
}

Scalar::~Scalar() {
	return ;
}

Scalar::Scalar(Scalar const & src) {
	*this = src;
	return ;
}

Scalar const &	Scalar::operator=(Scalar const & rhs) {
	this->nan = rhs.nan;
	return *this;
}

void	Scalar::convertToChar(int i, bool nan) {
	std::stringstream	buf;
	char		c;
	if (nan)
		this->c = "impossible";
	else if (i % 255 > ' ') {
		c = static_cast<char>(i);
		buf << "'" << c << "'";
		buf >> this->c;
	}
	else 
		this->c = "Non displayable";
}

void	Scalar::convertToInt(int f, bool nan) {
 	std::stringstream	buf;
	if (nan)
		this->i = "impossible";
	else {
		buf << f;
		buf >> this->i;
	}
}

void	Scalar::convertToFloat(int i, float f) {
	std::stringstream	buf;
	buf << f;
	buf >> this->f;
	if (static_cast<float>(i) == f)
		this->f += ".0";
	this->f += "f";
}

void	Scalar::convertToDouble(int i, float f) {
	std::stringstream	buf;
	double		d;
	d = static_cast<double>(f);
	buf << d;
	buf >> this->d;
	if (static_cast<float>(i) == f)
		this->d += ".0";
}

void	Scalar::convertLiteral(const char * test) {
	std::string		str = test;
	size_t			s;

	this->nan = false;
	for (int i = 0; i < static_cast<int>(str.length()); i++) {
		if (test[i] < '0' || test[i] > '9') {
			this->nan = true;
			break ;
		}
	}
	if ((s = str.find(".")) && s != std::string::npos) {
		if (s == str.rfind(".") && str.size() != str.rfind(".") + 1)
			this->nan = false;
	}
	if ((s = str.find("f")) && s != std::string::npos)
	{
		if (this->nan == false && str.size() == str.rfind("f") + 1)
			this->nan = false;
		else
			this->nan = true;
	}
	int i = std::atoi(test);
	float f = std::atof(test);
	this->convertToChar(i, this->nan);
	this->convertToInt(i, this->nan);
	this->convertToFloat(i, f);
	this->convertToDouble(i, f);
}

std::ostream &	operator<<(std::ostream & out, Scalar *in) {
	out << "char: " << in->c << std::endl;
	out << "int: " << in->i << std::endl;
	out << "float: " << in->f << std::endl;
	out << "double: " << in->d << std::endl;
	return out;
}
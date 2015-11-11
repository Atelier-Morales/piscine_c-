/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/11 12:15:15 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/11 12:15:17 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <iostream>
#include <iomanip>
#include <sstream>

class Scalar {
public:
	Scalar();
	~Scalar();
	Scalar(Scalar const & src);
	Scalar const &	operator=(Scalar const & rhs);
	void				convertLiteral(const char * test);
	void				convertToChar(int i, bool nan);
	void				convertToInt(int f, bool nan);
	void				convertToFloat(int i, float f);
	void				convertToDouble(int i, float f);
	bool				nan;
	std::string			c;
	std::string			i;
	std::string			f;
	std::string			d;
};

std::ostream &	operator<<(std::ostream & out, Scalar *in);

#endif
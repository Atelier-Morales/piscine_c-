/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 15:06:44 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/05 15:06:45 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class Fixed
{
public:
	Fixed(void);
	Fixed(int const i);
	Fixed(float const f);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed &				operator=(Fixed const & rhs);
	float 				toFloat(void) const;
	int 				toInt(void) const;
	int					getRawBits(void) const;
	void				setRawBits(int const raw);

private:
	int					_fixedValue;
	static const int	_fractBits;
};

std::ostream &			operator<<(std::ostream & out, Fixed const & in);

#endif
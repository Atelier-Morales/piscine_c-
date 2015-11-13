/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/13 10:22:30 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/13 10:22:32 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <list>

class	ValueNotFound: public std::exception {
	public:
		virtual const char *	what() const throw() {
			return ("Value not found in vector");
		}
		ValueNotFound(ValueNotFound const & src) {
			*this = src;
			return ;
		}
		ValueNotFound const & operator=(ValueNotFound const & rhs) {
			(void)rhs;
			return *this;
		}
		virtual ~ValueNotFound() throw() {
			return ;
		}
		ValueNotFound() {
			return ;
		}
}; 

template<typename T>
typename T::iterator		easyfind(T & cont, int value) {
	typename T::iterator it = find(cont.begin(), cont.end(), value);
	if (it != cont.end())
		return it;
	else
		throw ::ValueNotFound();
}

#endif
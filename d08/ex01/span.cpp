/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/13 13:30:04 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/13 13:30:05 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include "span.hpp"

span::span(unsigned int ints) : _nb(ints) {
	return ;
}

span::span(span const & src) {
	*this = src;
	return ;
}

span::~span() {
	return ;
}

span const &	span::operator=(span const & rhs) {
	(void)rhs;
	return *this;
}

void			span::addNumber(int nb) {
	if (this->_cont.size() == this->_nb)
		throw span::LimitReached();
	this->_cont.push_back(nb);
	return ;
}

unsigned int 	span::shortestSpan() {
	if (this->_cont.size() < 2)
		throw span::NoSpanFound();
	std::vector<int> span;
	std::vector<int> copy(this->_cont.begin(), this->_cont.end());
	int len = this->_cont.size();

	std::sort(copy.begin(), copy.end());
	for (int i = 0; i < len - 1; ++i) {
		if (copy[i + 1]) {
			span.push_back(copy[i + 1] - copy[i]);
		}
	}

	std::vector<int>::iterator it1 = span.begin();

	return (static_cast<unsigned int>(*it1));
}

unsigned int 	span::longestSpan() {
	if (this->_cont.size() < 2)
		throw span::NoSpanFound();
	std::vector<int> copy(this->_cont.begin(), this->_cont.end());

	std::sort(copy.begin(), copy.end());

	std::vector<int>::iterator it1 = copy.begin();
	std::vector<int>::iterator it2 = copy.end()-1;

	return (static_cast<unsigned int>(*it2 - *it1));
}
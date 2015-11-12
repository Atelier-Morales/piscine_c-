/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 16:18:07 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/12 16:18:10 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template<typename T>
class Array {
public:
	Array<T>() : _tab(NULL), _len(0) {
		return ;
	}
	Array<T>(unsigned int n) {
		this->_tab = new T[n];
		this->_len = n;
		return ;
	}
	Array<T>(Array const & src) {
		*this = src;
		return ;
	}
	~Array<T>() {
		delete [] this->_tab;
		return ;
	}
	Array<T> &		operator=(Array const & rhs) {
		this->_len = rhs.size();
		delete [] this->_tab;
		this->_tab = new T[this->_len];
		for (unsigned int i = 0; i < this->_len; ++i) {
			this->_tab[i] = rhs[i];
		}
		return *this;
	}
	T &				operator[](unsigned int i) const {
		if (i > _len)
			throw IndexTooHigh();
		return (this->_tab[i]);
	}
	unsigned int	size() const {
		return (this->_len);
	}
	class	IndexTooHigh: public std::exception {
		public:
			virtual const char *	what() const throw() {
				return ("Index higher than array's length");
			}
			IndexTooHigh(IndexTooHigh const & src) {
				*this = src;
				return ;
			}
			IndexTooHigh const & operator=(IndexTooHigh const & rhs) {
				(void)rhs;
				return *this;
			}
			virtual ~IndexTooHigh() throw() {
				return ;
			}
			IndexTooHigh() {
				return ;
			}
	}; 

private:
	T				*_tab;
	unsigned int	_len;	
	
};

#endif
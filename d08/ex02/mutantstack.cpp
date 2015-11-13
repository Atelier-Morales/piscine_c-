/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/13 15:55:38 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/13 15:55:39 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <stack>
#include "mutantstack.hpp"

template<typename T>
MutantStack<T>::MutantStack() {
	return ;
}

template<typename T>
MutantStack<T>::~MutantStack() {
	return ;
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const & src) {
	*this = src;
}

template<typename T>
MutantStack const & MutantStack<T>::operator=(MutantStack const & rhs) {
	(void)rhs;
	return *this;
}
	
template<typename T>
void	MutantStack<T>::push(T value) {
	this->_s.push(value);
	this->_v.push_back(value);
}

template<typename T>
void	MutantStack<T>::pop() {
	this->_s.pop();
	this->_v.pop_back();
}

template<typename T>
int		MutantStack<T>::size() {
	return this->_s.size();
}

template<typename T>
iterator	MutantStack<T>::begin() {
	std::vector<T>::iterator it = this->_v.begin();
	return it;
}

template<typename T>
iterator	MutantStack<T>::end() {
	std::vector<T>::iterator it = this->_v.end();
	return it;
}
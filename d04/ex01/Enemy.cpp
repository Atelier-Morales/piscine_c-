/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 20:18:44 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 20:18:45 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Enemy.hpp"

Enemy::Enemy(Enemy const & src) {
	*this = src;
	return ;
}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {
	return ;
}
Enemy::~Enemy() {
	return ;
}

Enemy const &			Enemy::operator=(Enemy const & rhs) {
	this->_type = rhs.getType();
	this->_hp = rhs.getHP();
	return (*this);
}

std::string const &		Enemy::getType() const {
	return (this->_type);
}

int 					Enemy::getHP() const {
	return (this->_hp);
}

void					Enemy::takeDamage(int i) {
	if (i < 0)
		return ;
	this->_hp -= i;
	if (this->_hp <= 0)
		this->_hp = 0;
	return ;
}
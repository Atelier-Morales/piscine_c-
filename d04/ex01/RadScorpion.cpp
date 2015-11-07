/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 20:19:30 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 20:19:31 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RadScorpion.hpp"

RadScorpion::RadScorpion(RadScorpion const & src) : Enemy(src) {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion"){
	std::cout << "* click click click *" << std::endl;
	return ;
}
RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}

RadScorpion const &			RadScorpion::operator=(RadScorpion const & rhs) {
	Enemy::operator=(rhs);
	return (*this);
}
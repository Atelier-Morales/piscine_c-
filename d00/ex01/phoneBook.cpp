/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 16:52:36 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/02 19:56:09 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "phoneBook.hpp"

phoneBook::phoneBook(void) : contact(0) {
	return ;
}

phoneBook::~phoneBook(void) {
	return ;
}

contact::contact(void) {
	return ;
}

contact::~contact(void) {
	return ;
}

int		phoneBook::checkInput(char *str) const {
	if (strcmp(str, "EXIT") == 0)
		return (1);
	else if (strcmp(str, "ADD") == 0)
		return (2);
	else if (strcmp(str, "SEARCH") == 0)
		return (3);
	return (0);
}

void	phoneBook::setContact(void) {
	if (this->contact < 8)
		this->contact += 1;
}

void	contact::printContact(void) const {
	std::cout << this->nb << " | ";
	std::cout << this->first_name << " | ";
	std::cout << this->last_name << " | ";
	std::cout << this->nickname << std::endl;
}

void	contact::printFullContact(void) const {
	std::cout << this->nb << std::endl;
	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->login << std::endl;
	std::cout << this->postal_address << std::endl;
	std::cout << this->email_address << std::endl;
	std::cout << this->phone_number << std::endl;
	std::cout << this->birthday_date << std::endl;
	std::cout << this->favorite_meal << std::endl;
	std::cout << this->underwear_color << std::endl;
	std::cout << this->darkest_secret << std::endl;
}

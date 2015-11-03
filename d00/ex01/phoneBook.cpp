/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 16:52:36 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/03 10:59:04 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <string>
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
	unsigned long	i;

	std::string buffer = std::to_string(this->nb);
	if (buffer.length() > 9) {
		for (i = 0; i < 9; ++i)
			std::cout << buffer[i];
		std::cout << "." << " | ";
	}
	else {
		for (i = 0; i < (10 - buffer.length()); ++i)
			std::cout << " ";
		std::cout << buffer << " | ";
	}

	if (this->first_name.length() > 9) {
		for (i = 0; i < 9; ++i)
			std::cout << this->first_name[i];
		std::cout << "." << " | ";
	}
	else {
		for (i = 0; i < (10 - this->first_name.length()); ++i)
			std::cout << " ";
		std::cout << this->first_name << " | ";
	}

	if (this->last_name.length() > 9) {
		for (i = 0; i < 9; ++i)
			std::cout << this->last_name[i];
		std::cout << "." << " | ";
	}
	else {
		for (i = 0; i < (10 - this->last_name.length()); ++i)
			std::cout << " ";
		std::cout << this->last_name << " | ";
	}

	if (this->nickname.length() > 9) {
		for (i = 0; i < 9; ++i)
			std::cout << this->nickname[i];
		std::cout << "." << " | " << std::endl;
	}
	else {
		for (i = 0; i < (10 - this->nickname.length()); ++i)
			std::cout << " ";
		std::cout << this->nickname << " | " << std::endl;
	}
}

void	contact::printFullContact(void) const {
	std::cout << "index          : " << this->nb << std::endl;
	std::cout << "first name     : " << this->first_name << std::endl;
	std::cout << "last name      : " << this->last_name << std::endl;
	std::cout << "nickname       : " << this->nickname << std::endl;
	std::cout << "login          : " << this->login << std::endl;
	std::cout << "postal address : " << this->postal_address << std::endl;
	std::cout << "email address  : " << this->email_address << std::endl;
	std::cout << "phone number   : " << this->phone_number << std::endl;
	std::cout << "birthday date  : " << this->birthday_date << std::endl;
	std::cout << "favorite meal  : " << this->favorite_meal << std::endl;
	std::cout << "underwear color: " << this->underwear_color << std::endl;
	std::cout << "darkest secret : " << this->darkest_secret << std::endl;
}

void	contact::fillDetails(int pos) {
	std::cout << "first name : ";
	std::cin >> this->first_name;

	std::cout << "last name : ";
	std::cin >> this->last_name;

	std::cout << "nickname : ";
	std::cin >> this->nickname;

	std::cout << "login : ";
	std::cin >> this->login;

	std::cout << "postal address : ";
	std::cin >> this->postal_address;

	std::cout << "email address : ";
	std::cin >> this->email_address;

	std::cout << "phone number : ";
	std::cin >> this->phone_number;

	std::cout << "birthday date : ";
	std::cin >> this->birthday_date;

	std::cout << "favorite meal : ";
	std::cin >> this->favorite_meal;

	std::cout << "underwear color : ";
	std::cin >> this->underwear_color;

	std::cout << "darkest secret : ";
	std::cin >> this->darkest_secret;

	this->nb = pos;
}

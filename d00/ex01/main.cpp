/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 16:33:50 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/02 20:10:41 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phoneBook.hpp"

contact	*fillDetails(contact *contactp, int pos) {
	std::cout << "first name : ";
	std::cin >> contactp->first_name;

	std::cout << "last name : ";
	std::cin >> contactp->last_name;

	std::cout << "nickname : ";
	std::cin >> contactp->nickname;

	std::cout << "login : ";
	std::cin >> contactp->login;

	std::cout << "postal address : ";
	std::cin >> contactp->postal_address;

	std::cout << "email address : ";
	std::cin >> contactp->email_address;

	std::cout << "phone number : ";
	std::cin >> contactp->phone_number;

	std::cout << "birthday date : ";
	std::cin >> contactp->birthday_date;

	std::cout << "favorite meal : ";
	std::cin >> contactp->favorite_meal;

	std::cout << "underwear color : ";
	std::cin >> contactp->underwear_color;

	std::cout << "darkest secret : ";
	std::cin >> contactp->darkest_secret;

	contactp->nb = pos;

	return (contactp);
}

int	main(void) {
	phoneBook	instance;
	char		buf[512];
	contact		contact1;
	contact		contact2;
	contact		contact3;
	contact		contact4;
	contact		contact5;
	contact		contact6;
	contact		contact7;
	contact		contact8;
	contact		*contactp;
	int			i;
	int			search;

	while (1)
	{
		std::cout << "Welcome to the phoneBook, please entre a command : ";
		std::cin >> buf;
		if (instance.checkInput(buf) == 0)
			std::cout << "wrong command" << std::endl;
		else if (instance.checkInput(buf) == 1) {
			std::cout << "exiting..." << std::endl;
			break ;
		}
		else if (instance.checkInput(buf) == 2) {
			if (instance.contact < 8) {
				instance.setContact();
				contactp = (instance.contact == 1) ? &contact1 : \
						   ((instance.contact == 2) ? &contact2 : \
							((instance.contact == 3) ? &contact3 : \
							 ((instance.contact == 4) ? &contact4 : \
							  ((instance.contact == 5) ? &contact5 : \
							   ((instance.contact == 6) ? &contact6 : \
								((instance.contact == 7) ? &contact7 : &contact8))))));
				fillDetails(contactp, instance.contact);
				std::cout << "contact added" << std::endl;
			}
			else
				std::cout << "Too many contacts in phonebook" << std::endl;
		}
		else if (instance.checkInput(buf) == 3) {
			for (i = 0; i < instance.contact; i++) {
				contactp = (i == 0) ? &contact1 : \
						   ((i == 1) ? &contact2 : \
							((i == 2) ? &contact3 : \
							 ((i == 3) ? &contact4 : \
							  ((i == 4) ? &contact5 : \
							   ((i == 5) ? &contact6 : \
								((i == 6) ? &contact7 : &contact8))))));
				contactp->printContact();
			}
			while (1) {
				std::cout << "find an index : ";
				std::cin >> i;	
				if (i > instance.contact || i < 1) {
					std::cout << "wrong input, stopping search" << std::endl;
					break ;
				}
				else {
					contactp = (i == 1) ? &contact1 : \
							   ((i == 2) ? &contact2 : \
								((i == 3) ? &contact3 : \
								 ((i == 4) ? &contact4 : \
								  ((i == 5) ? &contact5 : \
								   ((i == 6) ? &contact6 : \
									((i == 7) ? &contact7 : &contact8))))));
					contactp->printFullContact();
				}
			}
		}
	}
	return (0);
}

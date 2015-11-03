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
#include <string>
#include <stdlib.h>
#include "phoneBook.hpp"

int	main(void) {
	phoneBook	instance;
	int			i;
	char		buf[512];
	int     	len = 8;
	contact		contact[len];

	while (1) {
		std::cout << "Welcome to the phoneBook, please enter a command : ";
		if (std::cin >> buf) {
			if (instance.checkInput(buf) == 0)
				std::cout << "wrong command" << std::endl;
			else if (instance.checkInput(buf) == 1) {
				std::cout << "exiting..." << std::endl;
				break ;
			}
			else if (instance.checkInput(buf) == 2) {
				if (instance.contact < 8) {
					contact[instance.contact].fillDetails(instance.contact);
					instance.setContact();
					std::cout << "contact added" << std::endl;
				}
				else
					std::cout << "Too many contacts in phonebook" << std::endl;
			}
			else if (instance.checkInput(buf) == 3) {
				for (i = 0; i < instance.contact; i++)
					contact[i].printContact();
				while (1) {
					std::cout << "find a contact by index (type -1 to leave search) : ";
					if (std::cin >> i) {
						if (i > instance.contact || i < 0)
							break ;
						else
							contact[i].printFullContact();
					}
					else {
						std::cout << "invalid input, exiting program" << std::endl;
						exit(0);
					}
				}
			}
		}
		else
			exit(1);
	}
	return (0);
}

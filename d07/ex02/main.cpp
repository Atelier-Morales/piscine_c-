/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 16:18:16 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/12 16:18:20 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int	main(void) {
	Array<int>	p1(static_cast<unsigned int>(5));

	std::cout << "P1:" << std::endl;
	for (unsigned int i = 0; i < p1.size(); i++) {
		p1[i] = i;
		std::cout << p1[i] << " ";
	}

	std::cout << std::endl;

	std::cout << "P2:" << std::endl;
	Array<int>	p2(static_cast<unsigned int>(5));

	p2 = p1;

	for (unsigned int j = 0; j < p2.size(); j++)
		std::cout << p2[j] << " ";

	std::cout << std::endl;

	Array<char>	c1(static_cast<unsigned int>(5));

	std::cout << "C1:" << std::endl;
	for (unsigned int i = 0; i < c1.size(); i++) {
		c1[i] = ('A' + static_cast<int>(i));
		std::cout << c1[i] << " ";
	}

	std::cout << std::endl;

	Array<char> c2(c1);
	Array<char> c3;
	c3 = c2;

	std::cout << "C2:" << std::endl;
	for (unsigned int i = 0; i < c2.size(); i++)
		std::cout << c2[i] << " ";

	std::cout << std::endl;

	std::cout << "C3:" << std::endl;
	for (unsigned int i = 0; i < c3.size(); i++)
		std::cout << c3[i] << " ";

	std::cout << std::endl;

	std::cout << "Trying to access out of range memory:" << std::endl;

	for (unsigned int i = 0; i < 10; i++) {
		try {
			std::cout << c3[i] << " ";
		}
		catch (Array<char>::IndexTooHigh & e) {
			std::cout << std::endl << "Error : ";
			std::cout << e.what() << std::endl;
			break ;
		}
	}
	return (0);
}
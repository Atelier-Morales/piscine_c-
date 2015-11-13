/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/13 13:30:56 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/13 13:30:58 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"

int	main() {
	std::srand(static_cast<unsigned int>(std::time(0)));
	unsigned int 	len = 1000;
	span a = span(len);

	for (unsigned int i = 0; i < len; ++i) {
		a.addNumber(std::rand() % 1000);
	}

	std::list<int>::iterator it;

	std::cout << "a = ";
	for (it = a._cont.begin(); it != a._cont.end(); ++it) {
		std::cout << *it << " ";
	}

	std::cout << std::endl;

	std::cout << "a shortest : " << a.shortestSpan() << std::endl;
	std::cout << "a longest : " << a.longestSpan() << std::endl;

	span sp = span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << std::endl;

	std::cout << "sp = ";
	for (it = sp._cont.begin(); it != sp._cont.end(); ++it) {
		std::cout << *it << " ";
	}

	std::cout << std::endl;
	
	std::cout << "sp shortest : " << sp.shortestSpan() << std::endl;
	std::cout << "sp longest : " << sp.longestSpan() << std::endl;

	std::cout << std::endl;

	try {
		sp.addNumber(12);
		sp.addNumber(12);
	}
	catch (span::LimitReached & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		span sp = span(5);
		sp.addNumber(5);

		std::cout << std::endl;

		std::cout << "sp = ";
		for (it = sp._cont.begin(); it != sp._cont.end(); ++it) {
			std::cout << *it << " ";
		}

		std::cout << std::endl;
		
		std::cout << "sp shortest : " << sp.shortestSpan() << std::endl;
		std::cout << "sp longest : " << sp.longestSpan() << std::endl;
	}
	catch (span::NoSpanFound & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
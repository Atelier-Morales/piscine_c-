/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/11 11:00:19 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/11 11:00:20 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits>
#include <iostream>
#include <iomanip>
#include "Scalar.hpp"

int	main(int ac, char **av) {
	Scalar	*s = new Scalar();

	if (ac == 2) {
		s->convertLiteral(av[1]);
		std::cout << s;
	}
	delete s;
	return (0);
}
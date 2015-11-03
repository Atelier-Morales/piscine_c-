/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 19:06:42 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/03 19:06:44 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	std::string	test;
	std::string	*ptr;
	std::string	&ref = test;

	test = "HI THIS IS BRAIN";
	ptr = &test;
	
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
	return (0);
}
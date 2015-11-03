/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 17:58:00 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/03 17:58:01 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int	main(void) {
	std::srand(std::time(NULL));
	int 		random = std::rand() % 10;
	ZombieHorde	*Horde = new ZombieHorde(random);
	
	delete Horde;
	return (0);
}
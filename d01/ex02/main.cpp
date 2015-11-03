/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 16:06:30 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/03 16:06:31 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main(void) {
	std::srand(std::time(NULL));
	ZombieEvent	*event = new ZombieEvent();
	int 		random = std::rand() % 10;
	Zombie*		Zombies[random];

	std::cout << "generating " << random << " random zombies on the heap :" << std::endl;
	event->setZombieType("random Zombie");
	for (int i = 0; i < random; ++i)
		Zombies[i] = event->randomChump();
	for (int j = 0; j < random; ++j)
		delete Zombies[j];

	std::cout << "generating a pre-defined zombie on the stack :" << std::endl;
	Zombie		zombie = Zombie("Didier");
	zombie.setType("pitbull en colère");
	zombie.announce();

	delete	event;
	return (0);
}

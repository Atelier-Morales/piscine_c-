/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 16:07:04 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/03 16:07:05 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

class ZombieEvent
{
public:
	ZombieEvent();
	~ZombieEvent();

	void	setZombieType(std::string type);
	Zombie* newZombie(std::string name);
	Zombie*	randomChump(void);

private:
	std::string	_type;
};

#endif
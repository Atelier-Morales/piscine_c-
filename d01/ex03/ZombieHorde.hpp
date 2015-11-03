/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 17:57:49 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/03 17:57:51 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

class ZombieHorde
{
public:
	ZombieHorde(int N);
	~ZombieHorde();

	void	setZombieType(std::string type);
	Zombie* newZombie(void);
	void	asignNames(void);	

private:
	Zombie		*_zombie;
	std::string	_type;
	int			_nbZombies;
};

#endif
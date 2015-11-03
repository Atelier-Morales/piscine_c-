/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 16:06:53 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/03 16:06:55 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie
{
public:
	Zombie(std::string name);
	~Zombie();

	void	announce(void) const;
	void	setType(std::string type);

private:
	std::string	_name;
	std::string	_type;
};

#endif
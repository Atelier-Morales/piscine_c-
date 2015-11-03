/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 17:57:25 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/03 17:57:26 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie
{
public:
	Zombie();
	~Zombie();

	void	announce(void) const;
	void	setType(std::string type);
	void	setName(std::string name);

private:
	std::string	_name;
	std::string	_type;
};

#endif
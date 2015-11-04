/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 11:39:16 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/04 11:39:20 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

typedef  void (Human::*Fn)(std::string const & target);

void	Human::meleeAttack(std::string const & target) {
	std::cout << "Performing a melee attack on " << target << std::endl;
	return ;
}

void	Human::rangedAttack(std::string const & target) {
	std::cout << "Performing a ranged atack on " << target << std::endl;
	return ;
}

void	Human::intimidatingShout(std::string const & target) {
	std::cout << "Performing an intimidating shout on " << target << std::endl;
	return ;
}

void	Human::action(std::string const & action_name, std::string const & target) {
	Fn	actions[3] = {
		&Human::meleeAttack, 
		&Human::rangedAttack, 
		&Human::intimidatingShout
	};
	std::string		list[3] = {
		"meleeAttack", 
		"rangedAttack", 
		"intimidatingShout"
	};
	for (int i = 0; i < 3; i++)
	{
		if (list[i].compare(action_name) == 0)
			return (this->*(actions[i]))(target);
	}
}


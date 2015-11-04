/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 11:13:51 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/04 11:13:52 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANA_HPP
# define HUMANA_HPP

class HumanA
{
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void	attack() const;

private:
	std::string	_name;
	Weapon		&_weapon;
};

#endif

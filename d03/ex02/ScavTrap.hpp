/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 14:44:45 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/06 14:49:17 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap : public ClapTrap {
public:
	ScavTrap(std::string const & name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap();

	ScavTrap & operator=(ScavTrap const & rhs);
	void		challengeNewcomer(std::string const & target);
};

#endif
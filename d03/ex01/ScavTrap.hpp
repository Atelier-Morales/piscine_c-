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

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap {
public:
	ScavTrap(std::string const & name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap();

	ScavTrap & operator=(ScavTrap const & rhs);
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		challengeNewcomer(std::string const & target);

private:
	unsigned int			_hitPoints;
	unsigned int			_maxHitPoints;
	unsigned int			_energyPoints;
	unsigned int			_maxEnergyPoints;
	unsigned int			_level;
	std::string				_name;
	unsigned int			_meleeDamage;
	unsigned int			_rangedDamage;
	unsigned int			_armorDamageReduction;
};

#endif
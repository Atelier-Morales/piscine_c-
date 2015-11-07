/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 16:03:52 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/06 16:03:58 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

class ClapTrap {
public:
	ClapTrap(std::string const & name);
	ClapTrap(ClapTrap const & src);
	virtual ~ClapTrap(void);

	ClapTrap const &	operator=(ClapTrap const & src);
	void				rangedAttack(std::string const & target);
	void				meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);

protected:
	unsigned int			_hitPoints;
	unsigned int			_maxHitPoints;
	unsigned int			_energyPoints;
	unsigned int			_maxEnergyPoints;
	unsigned int			_level;
	std::string				_name;
	unsigned int			_meleeDamage;
	unsigned int			_rangedDamage;
	unsigned int			_armorDamageReduction;

private:
	ClapTrap(void);
};

#endif
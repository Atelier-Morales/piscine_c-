/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 10:04:40 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/06 10:04:41 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class FragTrap {
public:
	FragTrap();
	FragTrap(std::string const & name);
	FragTrap(FragTrap const & frag);
	~FragTrap();

	FragTrap &	operator=(FragTrap const & rhs);
	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		vaulthunter_dot_exe(std::string const & target);

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
};

#endif
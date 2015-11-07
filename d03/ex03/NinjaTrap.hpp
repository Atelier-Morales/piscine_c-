/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 13:40:13 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 13:40:16 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

class NinjaTrap : public ClapTrap {
public:
	NinjaTrap(std::string const & name);
	NinjaTrap(NinjaTrap const & src);
	~NinjaTrap(void);

	NinjaTrap const &	operator=(NinjaTrap const & rhs);
	void				rangedAttack(std::string const & target);
	void				meleeAttack(std::string const & target);
	void				ninjaShoebox(NinjaTrap & src);
	void				ninjaShoebox(ClapTrap & src);
	void				ninjaShoebox(FragTrap & src);
	void				ninjaShoebox(ScavTrap & src);

private:
	NinjaTrap(void);
	
};

#endif
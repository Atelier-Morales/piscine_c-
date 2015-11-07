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
#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class FragTrap : virtual public ClapTrap {
public:
	FragTrap(std::string const & name);
	FragTrap(FragTrap const & frag);
	virtual ~FragTrap(void);

	FragTrap const &	operator=(FragTrap const & rhs);
	void				rangedAttack(std::string const & target);
	void				meleeAttack(std::string const & target);
	void				vaulthunter_dot_exe(std::string const & target);

private:
	FragTrap(void);
};

#endif
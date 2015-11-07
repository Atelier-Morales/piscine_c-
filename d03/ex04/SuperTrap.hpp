/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 16:19:44 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 16:19:46 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

class SuperTrap : virtual public FragTrap, virtual public NinjaTrap {
public:
	SuperTrap(std::string const & name);
	SuperTrap(SuperTrap const & src);
	virtual ~SuperTrap(void);

	SuperTrap const &	operator=(SuperTrap const & rhs);
	void				rangedAttack(std::string const & target);
	void				meleeAttack(std::string const & target);

private:
	SuperTrap(void);
};

#endif
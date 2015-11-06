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

class FragTrap : public ClapTrap {
public:
	FragTrap(std::string const & name);
	FragTrap(FragTrap const & frag);
	~FragTrap();

	FragTrap const &	operator=(FragTrap const & rhs);
	void				vaulthunter_dot_exe(std::string const & target);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 20:18:13 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 20:18:15 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

class AWeapon {
public:
	AWeapon(AWeapon const & src);
	AWeapon(std::string const & name, int apcost, int damage);
	virtual 		~AWeapon();

	AWeapon const &		operator=(AWeapon const & rhs);
	std::string const &	getName() const;
	int 				getAPCost() const;
	int 				getDamage() const;
	virtual void 		attack() const = 0;

private:
	AWeapon();

protected:
	std::string	_name;
	int			_cost;
	int			_damage;

};

#endif
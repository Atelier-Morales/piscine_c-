/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 20:18:34 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 20:18:35 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

#ifndef	CHARACTER_HPP
# define CHARACTER_HPP

class Character {
public:
	Character(Character const & src);
	Character(std::string const & name);
	~Character();

	Character const &	operator=(Character const & rhs);
	void 				recoverAP();
	void 				equip(AWeapon *weapon);
	void 				attack(Enemy *enemy);
	std::string const & getName() const;
	std::string const & getWeaponName() const;
	AWeapon				*getWeapon() const;
	int					getAP() const;

private:
	Character();
	std::string			_name;
	int					_ap;
	AWeapon				*weapon;
};

std::ostream &			operator<<(std::ostream & out, Character const & in);

#endif
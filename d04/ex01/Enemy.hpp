/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 20:18:51 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 20:18:51 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ENEMY_HPP
# define ENEMY_HPP

class Enemy {
public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & src);
	virtual ~Enemy();

	Enemy const &		operator=(Enemy const & rhs);
	std::string const &	getType() const;
	int 				getHP() const;
	virtual void 		takeDamage(int i);

private:
	Enemy();

protected:
	int					_hp;
	std::string			_type;
};

#endif
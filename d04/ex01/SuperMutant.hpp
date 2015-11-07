/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 20:19:59 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 20:20:00 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Enemy.hpp"

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

class SuperMutant : virtual public Enemy {
public:
	SuperMutant();
	SuperMutant(SuperMutant const & src);
	~SuperMutant();

	SuperMutant const &	operator=(SuperMutant const & rhs);
	void 		takeDamage(int i);

private:
	

};

#endif
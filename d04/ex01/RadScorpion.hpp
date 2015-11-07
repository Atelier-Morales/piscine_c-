/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 20:19:37 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 20:19:38 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Enemy.hpp"

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

class RadScorpion : virtual public Enemy {
public:
	RadScorpion();
	RadScorpion(RadScorpion const & src);
	~RadScorpion();

	RadScorpion const &	operator=(RadScorpion const & rhs);

private:
	

};

#endif
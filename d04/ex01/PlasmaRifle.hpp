/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 20:19:05 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 20:19:06 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AWeapon.hpp"

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

class PlasmaRifle : virtual public AWeapon {
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const & src);
	~PlasmaRifle();

	PlasmaRifle const &	operator=(PlasmaRifle const & rhs);
	void				attack() const;

private:
	

};

#endif
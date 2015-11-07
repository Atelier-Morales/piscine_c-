/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 20:19:20 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 20:19:20 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AWeapon.hpp"

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

class PowerFist : virtual public AWeapon {
public:
	PowerFist();
	PowerFist(PowerFist const & src);
	~PowerFist();

	PowerFist const &	operator=(PowerFist const & rhs);
	void				attack() const;

private:	

};

#endif
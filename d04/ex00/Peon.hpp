/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 19:26:00 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 19:26:02 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Victim.hpp"

#ifndef PEON_HPP
# define PEON_HPP

class Peon : virtual public Victim {
public:
	Peon(std::string const & name);
	Peon(Peon const & src);
	virtual ~Peon();

	Peon const &		operator=(Peon const & rhs);
	std::string const &	getName() const;
	virtual void 		getPolymorphed() const;

protected:

private:
	Peon();
};


#endif
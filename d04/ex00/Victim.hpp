/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 18:03:12 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 18:03:13 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef VICTIM_HPP
# define VICTIM_HPP

class Victim {
public:
	Victim(std::string const & name);
	Victim(Victim const & src);
	virtual ~Victim();

	Victim const &		operator=(Victim const & rhs);
	std::string const &	getName() const;
	virtual void 				getPolymorphed() const;

protected:
	std::string _name;

private:
	Victim();
};

std::ostream &	operator<<(std::ostream & out, Victim const & in);

#endif
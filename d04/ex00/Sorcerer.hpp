/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 18:02:31 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/07 18:02:32 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

#ifndef SORCERER_HPP
#define SORCERER_HPP

class Sorcerer {
public:
	Sorcerer(std::string const & name, std::string const & title);
	Sorcerer(Sorcerer const & src);
	virtual ~Sorcerer();

	Sorcerer const &	operator=(Sorcerer const & rhs);
	std::string const &	getName() const;
	std::string const & getTitle() const;
	void 				polymorph(Victim const & victim) const;
	void 				polymorph(Peon const & peon) const;

private:
	std::string			_name;
	std::string			_title;
	Sorcerer();
};

std::ostream &	operator<<(std::ostream & out, Sorcerer const & in);

#endif
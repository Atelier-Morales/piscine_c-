/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 19:14:42 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/03 19:14:43 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

#ifndef HUMAN_HPP
# define HUMAN_HPP

class Human
{
public:
	Human();
	~Human();

	std::string	identify() const;
	Brain		getBrain() const;

private:
	Brain	_brain;

};

#endif
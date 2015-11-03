/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 19:14:20 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/03 19:14:21 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain
{
public:
	Brain();
	~Brain();

	std::string	identify() const;
	
private:
	std::string	_address;
};

#endif
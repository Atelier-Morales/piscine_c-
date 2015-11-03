/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 15:08:05 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/03 15:08:07 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef PONY_HPP
# define PONY_HPP

class	Pony {

public:
	Pony(std::string name);
	~Pony(void);

	void	setPony(std::string age, std::string type, std::string color);
	void	ponySpeech() const;

private:
	std::string	_name;
	std::string _age;
	std::string _type;
	std::string _color;
};

#endif
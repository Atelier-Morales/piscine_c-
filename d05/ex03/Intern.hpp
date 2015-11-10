/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 18:57:34 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/10 18:57:36 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Intern {
public:
	Intern();
	Intern(Intern const & src);
	~Intern();

	Intern const &	operator=(Intern const & rhs);
	Form			*makeForm(std::string request, std::string target);
};

#endif
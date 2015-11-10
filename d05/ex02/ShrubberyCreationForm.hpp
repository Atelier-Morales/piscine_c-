/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 13:21:11 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/10 13:21:12 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

#ifndef SHRUBBERYCREATION_HPP
# define SHRUBBERYCREATION_HPP

class ShrubberyCreationForm : virtual public Form {
public:
	ShrubberyCreationForm(std::string const & target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm const &	operator=(ShrubberyCreationForm const & rhs);
	void							execute(Bureaucrat const & executor) const;

private:
	ShrubberyCreationForm();

protected:
};

#endif
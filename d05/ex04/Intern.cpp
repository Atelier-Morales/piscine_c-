/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 18:57:44 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/10 18:57:46 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {
	return ;
}

Intern::Intern(Intern const & src) {
	*this = src;
	return ;
}

Intern::~Intern() {
	return ;
}

Intern const &	Intern::operator=(Intern const & rhs) {
	(void)rhs;
	return *this;
}

Form			*Intern::makeForm(std::string request, std::string target) {
	Form *f = NULL;
	std::string		list[3] = {
		"presidential pardon request", 
		"robotomy request", 
		"shrubbery creation request"
	};
	if (list[0].compare(request) == 0) {
		//std::cout << "Intern creates a" << list[0request << std::endl;
		f = new PresidentialPardonForm(target);
	}
	else if (list[1].compare(request) == 0) {
		//std::cout << "Intern creates " << request << std::endl;
		f = new RobotomyRequestForm(target);
	}
	else if (list[2].compare(request) == 0) {
		//std::cout << "Intern creates " << request << std::endl;
		f = new ShrubberyCreationForm(target);
	}
	else {
		//std::cout << "Couldn't find request for the form " << request << ", Sorry.." << std::endl;
		throw Intern::UnknownForm();
	}
	return (f);
}

const char *		Intern::UnknownForm::what() const throw() {
	return ("Intern error : Form request unknown");
}

Intern::UnknownForm::UnknownForm(Intern::UnknownForm const & src) {
	*this = src;
	return ;
}

Intern::UnknownForm const & Intern::UnknownForm::operator=(Intern::UnknownForm const & rhs) {
	(void)rhs;
	return *this;
}

Intern::UnknownForm::~UnknownForm() throw() {
	return ;
}

Intern::UnknownForm::UnknownForm() {
	return ;
}
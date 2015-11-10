/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 13:20:18 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/10 13:20:20 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

typedef PresidentialPardonForm pres;

pres::PresidentialPardonForm(std::string const & target) : Form::Form("PresidentialPardonForm", 25, 5, target) {
	return ;
}

pres::PresidentialPardonForm(pres const & src) : Form::Form("PresidentialPardonForm", src.getSignGrade(), src.getExecGrade(), src.getTarget()) { 
	return ;
}

pres::~PresidentialPardonForm() {
	return ;
}

pres const &	pres::operator=(pres const & rhs) {
	this->_signed = rhs.getStatus();
	return (*this);
}

void			pres::execute(Bureaucrat const & executor) const {
	std::cout << executor.getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
	return ;
}
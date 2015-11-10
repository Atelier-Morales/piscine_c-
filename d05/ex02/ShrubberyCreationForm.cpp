/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 13:20:54 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/10 13:20:59 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

typedef ShrubberyCreationForm shrub;

shrub::ShrubberyCreationForm(std::string const & target) : Form::Form("ShrubberyCreationForm", 145, 137, target) {
	return ;
}

shrub::ShrubberyCreationForm(shrub const & src) : Form::Form("ShrubberyCreationForm", src.getSignGrade(), src.getExecGrade(), src.getTarget()) { 
	return ;
}

shrub::~ShrubberyCreationForm() {
	return ;
}

shrub const &	shrub::operator=(shrub const & rhs) {
	this->_signed = rhs.getStatus();
	return (*this);
}

void			shrub::execute(Bureaucrat const & executor) const {
	std::string filename = executor.getName() + "_shrubbery";
	std::ofstream	ofs(filename.c_str(), std::fstream::app | std::fstream::out);
	ofs << "               ,@@@@@@@, 				  " << "\n";
	ofs << "       ,,,.   ,@@@@@@/@@,  .oo8888o.     " << "\n";
	ofs << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o    " << "\n";
	ofs << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'   " << "\n";
	ofs << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'   " << "\n";
	ofs << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'    " << "\n";
	ofs << "   `&%\\ ` /%&'    |.|        \\ '|8'      " << "\n";
	ofs << "       |o|        | |         | |  	  " << "\n";
	ofs << "       |.|        | |         | |        " << "\n";
	ofs << "jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << "\n";
	ofs.close();
	return ;
}














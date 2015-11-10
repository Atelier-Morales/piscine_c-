/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 13:20:39 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/10 13:20:40 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

typedef RobotomyRequestForm robot;

robot::RobotomyRequestForm(std::string const & target) : Form::Form("RobotomyRequestForm", 72, 45, target) {
	return ;
}

robot::RobotomyRequestForm(robot const & src) : Form::Form("RobotomyRequestForm", src.getSignGrade(), src.getExecGrade(), src.getTarget()) { 
	return ;
}

robot::~RobotomyRequestForm() {
	return ;
}

robot const &	robot::operator=(robot const & rhs) {
	this->_signed = rhs.getStatus();
	return (*this);
}

void			robot::execute(Bureaucrat const & executor) const {
	int	random = std::rand() % 10;
	if(random > 5)
		std::cout << "tic tic tac tac..." << executor.getName() << " has been robotomized successfully." << std::endl;
	else
		std::cout << "Robotomization failure." << std::endl;
	return ;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 20:13:40 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/10 20:13:43 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "OfficeBlock.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

OfficeBlock::OfficeBlock() {
	return ;
}

OfficeBlock::~OfficeBlock() {
	return ;
}

OfficeBlock::OfficeBlock(Intern	*intern, Bureaucrat *signer, Bureaucrat *executor) {
	this->_intern = intern;
	this->_signer = signer;
	this->_executor = executor;
	return ;
}

void	OfficeBlock::setIntern(Intern & intern) {
	this->_intern = &intern;
	return ;
}

void	OfficeBlock::setSigner(Bureaucrat & signer) {
	this->_signer = &signer;
	return ;
}

void	OfficeBlock::setExecutor(Bureaucrat & executor) {
	this->_executor = &executor;
	return ;
}

std::string const &	OfficeBlock::getSignerName() {
	return this->_signer->getName();
}

std::string const &	OfficeBlock::getExecutorName() {
	return this->_executor->getName();
}

void				OfficeBlock::doBureaucracy(std::string request, std::string target) {
	Form	*test;
	try {
		test = this->_intern->makeForm(request, target);
		std::cout << "Intern creates a " << test->getName() << " Form (s.grade " << test->getSignGrade() << ", ex.grade " << test->getExecGrade() << ") targeted on " << target;	
		std::cout << " (Unsigned)" << std::endl;
	}
	catch (Intern::UnknownForm & e) {
		throw e;
	}
	try {
		test->beSigned(*(this->_signer));
		std::cout << "Bureaucrat " << this->_signer->getName() << " (Grade " << this->_signer->getGrade() << ") signs a " << test->getName() << " Form (s.grade " << test->getSignGrade() << ", ex.grade " << test->getExecGrade() << ") targeted on " << target;
		std::cout << " (Unsigned)" << std::endl;
	}
	catch (Form::GradeTooLowException & e) {
		throw e;
	}
	try {
		this->_executor->executeForm(*test);
		std::cout << "Bureaucrat " << this->_signer->getName() << " (Grade " << this->_signer->getGrade() << ") executes a " << test->getName() << " Form (s.grade " << test->getSignGrade() << ", ex.grade " << test->getExecGrade() << ") targeted on " << target;
		std::cout << " (Signed)" << std::endl;
		std::cout << "That'll do, " << target << ". That'll do ..." << std::endl;
	}
	catch (std::exception & e) {
		throw e;
	}
}
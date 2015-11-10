/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 14:13:13 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/09 14:13:15 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

typedef	Bureaucrat::GradeTooLowException  GradeTooLow;
typedef Bureaucrat::GradeTooHighException GradeTooHigh;

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat(void) {
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (grade > 150)
		throw GradeTooLow();
	else if (grade < 1)
		throw GradeTooHigh();
	return ;
}

Bureaucrat const &	Bureaucrat::operator=(Bureaucrat const & rhs) {
	this->_name = rhs.getName();
	this->_grade = rhs.getGrade();
	return *this;
}

std::ostream &	operator<<(std::ostream & out, Bureaucrat const & in) {
	out << in.getName() << ", bureaucrat grade " << in.getGrade() << ".";
	return out;
}

std::string const &	Bureaucrat::getName() const {
	return(this->_name);
}


int					Bureaucrat::getGrade() const {
	return(this->_grade);
}

void				Bureaucrat::decreaseGrade() {
	if (this->_grade == 150)
		throw GradeTooLow();
	this->_grade++;
	return ;
}


void				Bureaucrat::increaseGrade() {
	if (this->_grade == 1)
		throw GradeTooHigh();
	this->_grade--;
	return ;
}

void				Bureaucrat::decreaseGrade(int value) {
	if (this->_grade + value > 150)
		throw GradeTooLow();
	this->_grade += value;
	return ;
}


void				Bureaucrat::increaseGrade(int value) {
	if (this->_grade - value < 1)
		throw GradeTooHigh();
	this->_grade -= value;
	return ;
}

const char *		GradeTooHigh::what() const throw() {
	return ("Bureaucrat error : grade value too high");
}

const char *		GradeTooLow::what() const throw() {
	return ("Bureaucrat error : grade value too low");
}

GradeTooHigh::GradeTooHighException(GradeTooHigh const & src) {
	*this = src;
	return ;
}

GradeTooHigh const & GradeTooHigh::operator=(GradeTooHigh const & rhs) {
	(void)rhs;
	return *this;
}

GradeTooHigh::~GradeTooHighException() throw() {
	return ;
}

GradeTooHigh::GradeTooHighException() {
	return ;
}
	
GradeTooLow::GradeTooLowException(GradeTooLow const & src) {
	*this = src;
	return ;
}

GradeTooLow const & GradeTooLow::operator=(GradeTooLow const & rhs) {
	(void)rhs;
	return *this;
}

GradeTooLow::~GradeTooLowException() throw() {
	return ;
}

GradeTooLow::GradeTooLowException() {
	return ;
}
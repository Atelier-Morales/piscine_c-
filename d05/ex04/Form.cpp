/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 09:08:55 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/10 09:08:56 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

typedef	Form::GradeTooLowException  GradeTooLow;
typedef Form::GradeTooHighException GradeTooHigh;
typedef Form::FormNotSigned FormNotSigned;

Form::Form(Form const & src) : _name(src.getName()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade()), _signed(src.getStatus()), _target(src.getTarget()) {
	return ;
}

Form::~Form() {
	return ;
}

Form const &	Form::operator=(Form const & rhs) {
	this->_signed = rhs.getStatus();
	return (*this);
}

Form::Form(std::string const & name, int signGrade, int execGrade, std::string target) : _name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(false), _target(target) {
	if (_execGrade > 150 || _signGrade > 150)
		throw GradeTooLow();
	else if (_execGrade < 1 || _signGrade < 1)
		throw GradeTooHigh();
	return ;
}

std::string	const &	Form::getName() const {
	return (this->_name);
}

std::string			Form::getTarget() const {
	return (this->_target);
}

int					Form::getSignGrade() const {
	return (this->_signGrade);
}

int					Form::getExecGrade() const {
	return (this->_execGrade);
}

void				Form::setStatus(bool status) {
	this->_signed = status;
}

void				Form::beSigned(Bureaucrat const & b) {
	if (b.getGrade() > this->getSignGrade()) {
		throw GradeTooLow();
	}
	this->setStatus(true);
	return ;
}

bool				Form::getStatus() const {
	return (this->_signed);
}

void				Form::checkExecute(Bureaucrat const & executor) const {
	if (!this->_signed)
		throw FormNotSigned();
	if (executor.getGrade() > this->_execGrade)
		throw GradeTooLow();
	else
		this->execute(executor);
	return ;
}

std::ostream &		operator<<(std::ostream & out, Form const & in) {
	if (in.getName() == "")
		out << "Form is NUll";
	else if (in.getStatus())
		out << "Form " << in.getName() << " is signed, minimum grade to sign is " << in.getSignGrade() << ", minimum to execute is " << in.getExecGrade();
	else
		out << "Form " << in.getName() << " is unsigned, minimum grade to sign it is " << in.getSignGrade() << ", minimum to execute is " << in.getExecGrade();  
	return out;
}

const char *		GradeTooHigh::what() const throw() {
	return ("Form error : Bureaucrat grade value too high");
}

const char *		GradeTooLow::what() const throw() {
	return ("Form error : Bureaucrat grade value too low");
}

const char *		FormNotSigned::what() const throw() {
	return ("Form is not signed");
}

//EXCEPTION TOO HIGH COPLIEN FORM

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

//EXCEPTION TOO LOW COPLIEN FORM
	
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

// EXCEPTION FORM NOT SIGNED COPLIEN
	
FormNotSigned::FormNotSigned(FormNotSigned const & src) {
	*this = src;
	return ;
}

FormNotSigned const & FormNotSigned::operator=(FormNotSigned const & rhs) {
	(void)rhs;
	return *this;
}

FormNotSigned::~FormNotSigned() throw() {
	return ;
}

FormNotSigned::FormNotSigned() {
	return ;
}
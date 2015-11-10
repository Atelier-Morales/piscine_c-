/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 14:13:04 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/09 14:13:05 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat {
public:
	Bureaucrat(Bureaucrat const & src);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();

	Bureaucrat const &	operator=(Bureaucrat const & rhs);
	std::string const &	getName() const;
	int					getGrade() const;
	void				increaseGrade();
	void				decreaseGrade();
	void				increaseGrade(int value);
	void				decreaseGrade(int value);
	void				signForm(Form & form);
	class	GradeTooHighException: public std::exception {
		public:
			virtual const char *	what() const throw();
			GradeTooHighException(GradeTooHighException const & src);
			GradeTooHighException const & operator=(GradeTooHighException const & rhs);
			~GradeTooHighException() throw();
			GradeTooHighException();
	};

	class	GradeTooLowException: public std::exception {
		public:
			virtual const char *	what() const throw();
			GradeTooLowException(GradeTooLowException const & src);
			GradeTooLowException const & operator=(GradeTooLowException const & rhs);
			~GradeTooLowException() throw();
			GradeTooLowException();
	};

private:
	Bureaucrat();
	std::string			_name;
	int					_grade;
};

std::ostream &	operator<<(std::ostream & out, Bureaucrat const & in);

#endif
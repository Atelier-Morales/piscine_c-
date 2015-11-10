/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 09:09:01 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/10 09:09:04 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include <stdexcept>

class Bureaucrat;

class Form {
public:
	Form(std::string const & name, int signGrade, int execGrade, std::string target);
	virtual ~Form();
	Form(Form const & src);

	Form const &		operator=(Form const & rhs);
	std::string const &	getName() const;
	int					getSignGrade() const;
	int					getExecGrade() const;
	void				beSigned(Bureaucrat const & b);
	bool				getStatus() const;
	std::string			getTarget() const;
	void				setStatus(bool status);
	virtual void		execute(Bureaucrat const & executor) const = 0;
	void				checkExecute(Bureaucrat const & executor) const;
	
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

	class	FormNotSigned: public std::exception {
		public:
			virtual const char *	what() const throw();
			FormNotSigned(FormNotSigned const & src);
			FormNotSigned const & operator=(FormNotSigned const & rhs);
			~FormNotSigned() throw();
			FormNotSigned();
	};

private:
	Form();

protected:
	std::string	const _name;
	int			const _signGrade;
	int			const _execGrade;
	bool		_signed;
	std::string _target;
};

std::ostream &	operator<<(std::ostream & out, Form const & in);

#endif
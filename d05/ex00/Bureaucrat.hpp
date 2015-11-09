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

#include <iostream>

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat();

	Bureaucrat const &	operator=(Bureaucrat const & rhs);

private:
	std::string const	_name;
	int					grade;
};

std::ostream &	operator<<(std::ostream & out, Bureaucrat const & in);

#endif
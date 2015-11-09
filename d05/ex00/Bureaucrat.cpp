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
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) {
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat(void) {
	return ;
}
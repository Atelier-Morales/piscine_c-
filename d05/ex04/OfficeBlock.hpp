/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/10 20:13:34 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/10 20:13:35 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"

class OfficeBlock {
public:
	OfficeBlock(Intern	*intern, Bureaucrat *signer, Bureaucrat *executor);
	OfficeBlock();
	~OfficeBlock();

	void				setIntern(Intern & intern);
	void				setSigner(Bureaucrat & signer);
	void				setExecutor(Bureaucrat & executor);
	void				doBureaucracy(std::string request, std::string target);
	std::string const &	getSignerName();
	std::string const &	getExecutorName();

private:
	Intern		*_intern;
	Bureaucrat	*_signer;
	Bureaucrat	*_executor;
};

#endif
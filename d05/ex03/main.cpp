/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 14:13:20 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/09 14:13:22 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


int main(void) {
    Intern  random;
    Form    *r1;
    Form    *r2;
    Form    *r3;
    Form    *r4;

    r1 = random.makeForm("robotomy request", "Tintin");
    r2 = random.makeForm("presidential pardon request", "Toto");
    r3 = random.makeForm("shrubbery creation request", "Zigoto");
    r4 = random.makeForm("Toto creation request", "Tata");

    std::cout << *r1 << std::endl;
    std::cout << *r2 << std::endl;
    std::cout << *r3 << std::endl;

    return 0;
}
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
#include "OfficeBlock.hpp"


int main(void) {
    Intern idiotOne;
    Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
    Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);
    OfficeBlock ob;
    ob.setIntern(idiotOne);
    ob.setSigner(bob);
    ob.setExecutor(hermes);

    std::cout << "signer: " << ob.getSignerName() << std::endl;
    std::cout << "executor: " << ob.getExecutorName() << std::endl;

    try {
        ob.doBureaucracy("mutant pig termination", "Pigley");
    }
    catch (Intern::UnknownForm & e) {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    try {
        ob.doBureaucracy("presidential pardon request", "Ron");
    }
    catch (Intern::UnknownForm & e) {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    try {
        ob.doBureaucracy("robotomy request", "Robert");
    }
    catch (Intern::UnknownForm & e) {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    try {
        ob.doBureaucracy("shrubbery creation request", "Robert");
    }
    catch (Intern::UnknownForm & e) {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
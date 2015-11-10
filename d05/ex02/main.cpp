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
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

typedef ShrubberyCreationForm S;
typedef PresidentialPardonForm P;
typedef RobotomyRequestForm Ro;

int main(void) {
    std::srand(std::time(NULL));
    try {
        S    f1("test");
        std::cout << f1 << std::endl;
    } catch (std::exception const & e) {
        std::cout << e.what() << std::endl;   
    }
    try {
        S    f2("test_fail");
        std::cout << f2 << std::endl;
    } catch (std::exception const & e) {
        std::cout << e.what() << std::endl;   
    }
    try {
        Bureaucrat G("Gerard", 110);
        std::cout << G << std::endl;
        P    f1("test");
        std::cout << f1 << std::endl;
        f1.beSigned(G);
        G.executeForm(f1);
        std::cout << f1 << std::endl;
    } catch (std::exception const & e) {
        std::cout << e.what() << std::endl;   
    }
    try {
        Bureaucrat R("Rene", 11);
        Bureaucrat A("Alain", 1);
        std::cout << R << std::endl;
        Ro f1("test");
        std::cout << f1 << std::endl;
        R.signForm(f1);
        R.executeForm(f1);
        A.executeForm(f1);
        std::cout << f1 << std::endl;
    } catch (std::exception const & e) {
        std::cout << e.what() << std::endl;   
    }
    try {
        Bureaucrat I("Irene", 100);
        Bureaucrat J("Jean", 150);
        std::cout << I << std::endl;
        S    f1("test2");
        std::cout << f1 << std::endl;
        I.signForm(f1);
        I.executeForm(f1);
        J.executeForm(f1);
        std::cout << f1 << std::endl;
    } catch (std::exception const & e) {
        std::cout << e.what() << std::endl;   
    }
    return 0;
}
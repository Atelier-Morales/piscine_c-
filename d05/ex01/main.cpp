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

int main(void) {
    try {
        Form    f1("test", 150, 150);
        std::cout << f1 << std::endl;
    } catch (std::exception const & e) {
        std::cout << e.what() << std::endl;   
    }
    try {
        Form    f2("test_fail", 0, 150);
        std::cout << f2 << std::endl;
    } catch (std::exception const & e) {
        std::cout << e.what() << std::endl;   
    }
    try {
        Bureaucrat G("Gerard", 110);
        std::cout << G << std::endl;
        Form    f1("test", 150, 150);
        std::cout << f1 << std::endl;
        f1.beSigned(G);
        G.signForm(f1);
        std::cout << f1 << std::endl;
    } catch (std::exception const & e) {
        std::cout << e.what() << std::endl;   
    }
    try {
        Bureaucrat M("Marc", 120);
        std::cout << M << std::endl;
        Form    f1("test", 100, 100);
        std::cout << f1 << std::endl;
        f1.beSigned(M);
        std::cout << f1 << std::endl;
    } catch (std::exception const & e) {
        std::cout << e.what() << std::endl;   
    }
    try {
        Bureaucrat I("Irene", 90);
        std::cout << I << std::endl;
        Form    f1("test2", 50, 50);
        std::cout << f1 << std::endl;
        I.signForm(f1);
        std::cout << f1 << std::endl;
    } catch (std::exception const & e) {
        std::cout << e.what() << std::endl;   
    }
    return 0;
}
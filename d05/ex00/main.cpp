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

int main(void) {
    try {
        Bureaucrat A("fernan", 12);
        std::cout << A << std::endl;
    } catch (std::exception const & e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat B("Roger", -12);
        std::cout << B << std::endl;
    } catch (std::exception const & e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat C("Maurice", 222);
        std::cout << C << std::endl;
    } catch (std::exception const & e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat D("Jerome", 2);
        std::cout << D << std::endl;
        D.increaseGrade();
        std::cout << D << std::endl;
        D.increaseGrade();
        std::cout << D << std::endl;
    } catch (std::exception const & e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat E("Marcel", 149);
        std::cout << E << std::endl;
        E.decreaseGrade();
        std::cout << E << std::endl;
        E.decreaseGrade();
        std::cout << E << std::endl;
    } catch (std::exception const & e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat F("Firmin", 100);
        std::cout << F << std::endl;
        F.decreaseGrade(50);
        std::cout << F << std::endl;
        F.increaseGrade(160);
        std::cout << F << std::endl;
    } catch (std::exception const & e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
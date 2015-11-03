/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 15:08:14 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/03 15:08:15 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void	ponyOnTheHeap(std::string name, std::string age, std::string type, std::string color) {
	Pony	ponyHeap = Pony(name);
	ponyHeap.setPony(age, type, color);
	ponyHeap.ponySpeech();
	return ;
}

void	ponyOnTheStack(std::string name, std::string age, std::string type, std::string color) {
	Pony	*ponyStack = new Pony(name);
	ponyStack->setPony(age, type, color);
	ponyStack->ponySpeech();
	delete ponyStack;
	return ;
}

int	main(void) {
	ponyOnTheHeap("Albert", "21", "Maltese", "Brown");
	ponyOnTheStack("Jojo", "12", "Scottish", "White");
	return (0);
}
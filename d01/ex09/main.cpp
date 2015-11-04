/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 14:49:48 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/04 14:49:49 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Logger.hpp"

int	main(void) {
	Logger logAction;

	logAction.log("logToConsole", "Ceci est un test sur la sortie standard");
	logAction.log("logToConsole", "Ceci est un autre test sur la sortie standard");
	logAction.log("logToFile", "Ceci est un test sur le fichier log");
	logAction.log("logToFile", "Ceci est un autre test sur le fichier log");

	return (0);
}
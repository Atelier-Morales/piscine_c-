/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 10:04:49 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/06 10:04:50 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int	main() {
	FragTrap	FR4G("Zorg");

	FR4G.rangedAttack("Babar");
	FR4G.meleeAttack("Lolo");
	FR4G.takeDamage(42);
	FR4G.beRepaired(3);
	FR4G.vaulthunter_dot_exe("ours");
	FR4G.vaulthunter_dot_exe("Oui-Oui");
	FR4G.vaulthunter_dot_exe("une chevre");
	FR4G.vaulthunter_dot_exe("l'homme nu sous son trench");
	FR4G.vaulthunter_dot_exe("le colon de ta soeur");

	FragTrap	ClapTrap(FR4G);

	ClapTrap.rangedAttack("Hans");
	ClapTrap.meleeAttack("Fonzie");
	ClapTrap.takeDamage(90);
	ClapTrap.beRepaired(100);
	ClapTrap.takeDamage(90);

	ClapTrap.vaulthunter_dot_exe("une schneck");
	return (0);
}
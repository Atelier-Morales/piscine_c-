/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 11:39:37 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/04 11:39:38 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

int	main() {
	Human human;
	
	human.action("meleeAttack", "babar");
	human.action("rangedAttack", "babar");
	human.action("intimidatingShout", "babar");
	return (0);
}
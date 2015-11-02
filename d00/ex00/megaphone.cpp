/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 15:35:23 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/02 16:09:56 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
#include <string.h>

int	main(int ac, char **av) {

	int	i;
	int	j;

	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (i = 1; av[i]; i++) {
		for (j = 0; av[i][j]; j++)
			std::cout << (char)toupper(av[i][j]);
	}
	std::cout << std::endl;
	return (0);
}

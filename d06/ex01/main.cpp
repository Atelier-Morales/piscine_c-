/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/11 16:29:48 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/11 16:29:49 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstring>

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

void	*serialize(void)
{
	std::srand(static_cast<unsigned int>(std::time(0)));
	int random = std::rand() % 100000000;
	std::stringstream ss;
	ss << random;
	const char *str = ss.str().c_str();
	int len = strlen(str) + 18;
	char	*s = new char[len];
	int		i = 0;
	int		j;
	int		k;
	char	c;


	//BOUCLE PROPRE

	while (i < 8) {
		c = static_cast<char>((std::rand() % 94) + 32);
		if ((c <= '9' && c >= '1') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
			s[i] = c;
			i++;
		}
	}

	s[i] = '\0';
	i++;

	for(k = 0; k < static_cast<int>(strlen(str)); k++)
		s[i + k] = str[k];
	i = i + k;

	s[i] = '\0';
	i++;

	//BOUCLE IMMONDE MAIS CA MARCHE

	for (j = i; j < len; j++) {
		c = static_cast<char>((std::rand() % 94) + 32);
		if ((c <= '9' && c >= '1') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			s[j] = c;
		else
			j--;
	}

	s[j] = '\0';

	return static_cast<void*>(s);
}

Data	*deserialize(void *raw)
{
	Data	*ret = new Data;
	char	s1[9];
	char	s2[9];
	char	*rawc;
	int		len;

	rawc = static_cast<char*>(raw);
	ret->s1 = static_cast<char*>(std::memcpy(static_cast<void*>(s1), rawc, static_cast<size_t>(8)));
	len = strlen(rawc + 9);
	ret->n = atoi(static_cast<char*>(std::memcpy(static_cast<void*>(s2), rawc + 9, static_cast<size_t>(len))));
	ret->s2 = static_cast<char*>(std::memcpy(static_cast<void*>(s2), rawc + len + 10, static_cast<size_t>(8)));

	return ret;
}

int		main(void)
{	
	void	*test = serialize();
	Data	*data = deserialize(test);

	std::cout << data->s1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->s2 << std::endl;
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 15:14:47 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/12 15:14:55 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


template<typename T>
void	iter(T *str, int len, void (*f)(T *e)) {
	for (int i = 0; i < len; ++i) {
		f(&str[i]);
	}
}

template<typename T>
void	increment(T *e) {
	std::cout << "Before: " << *e << ", after: ";
	*e += 1;
	std::cout << *e << std::endl;
}

int main( void ) {
	char  	str[] = {'M','i','k','e',' ','s','m','i','t','h','\0'};
	char 	str2[] = "Dragic\0";
	int 	foo [] = { 16, 2, 77, 40, 12071 };
	
	std::cout << str << std::endl;
	::iter(str, static_cast<int>(strlen(str)), ::increment);
	std::cout << str << std::endl;

	std::cout << std::endl;

	std::cout << str2 << std::endl;
	::iter(str2, static_cast<int>(strlen(str2)), ::increment);
	std::cout << str2 << std::endl;

	std::cout << std::endl;

	std::cout << foo << std::endl;
	::iter(foo, (sizeof(foo)/sizeof(foo[0])), ::increment);
	std::cout << foo << std::endl;
	
	return 0;
}

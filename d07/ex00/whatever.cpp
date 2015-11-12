/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 14:43:42 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/12 14:44:39 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
T	max(T const & x, T const & y) {
	return ((x > y) ? x : y);
}


template<typename T>
T	min(T const & x, T const & y) {
	return ((x < y) ? x : y);
}


template<typename T>
void	swap(T & x, T & y) {
	T bufx = x;
	x = y;
	y = bufx;
	return ;
}


int main( void ) {
	int a = 2;
	int b = 3;
	::swap<int>( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min<int>( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max<int>( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap<std::string>(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min<std::string>( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max<std::string>( c, d ) << std::endl;
	return 0;
}
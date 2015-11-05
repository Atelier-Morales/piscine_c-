#include <iostream>
#include "Fixed.class.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed( 5.05f ) + Fixed( 2 ) );
	Fixed const d( Fixed( 5.05f ) - Fixed( 2 ) );
	Fixed const e( Fixed( 5.05f ) / Fixed( 2 ) );
	std::cout << "a : " << a << std::endl;
	std::cout << "++a : " << ++a << std::endl;
	std::cout << "a++ : " << a++ << std::endl;
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "c : " << c << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "e : " << e << std::endl;
	
	std::cout << "max(a, b) : " << Fixed::max( a, b ) << std::endl;
	std::cout << "min(a, b) : " << Fixed::min( a, b ) << std::endl;

	std::cout << std::endl;

	std::cout << "a > b " << (a > b) << std::endl;
	std::cout << "a < b " << (a < b) << std::endl;
	std::cout << "a >= b " << (a >= b) << std::endl;
	std::cout << "a <= b " << (a <= b) << std::endl;
	std::cout << "a == c " << (a == c) << std::endl;
	std::cout << "a >= c " << (a >= c) << std::endl;
	std::cout << "a <= c " << (a <= c) << std::endl;
	return 0;
}
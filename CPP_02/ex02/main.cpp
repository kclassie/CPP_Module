#include "Fixed.hpp"

int main( void ) {

//	Fixed a( 10 );
//	Fixed b( 10 );
//	Fixed c( 123.12f );
//	Fixed d( -122 );
//
//	std::cout << (b < c) << std::endl;
//	std::cout << (a == b) << std::endl;
//	std::cout << (a * b) << std::endl;
//	std::cout << (a / b) << std::endl;
//	std::cout << (d - b) << std::endl;
//	std::cout << (d + b) << std::endl;

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(5);
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::max( a, c ) << std::endl;

	return 0;
}
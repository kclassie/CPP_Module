#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixedPointValue( 0 )
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( const Fixed &fixed )
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPointValue = fixed.getRawBits();
	return;
}

Fixed & Fixed::operator=( Fixed const &fixed )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointValue = fixed.getRawBits();
	return *this;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
	return;
}


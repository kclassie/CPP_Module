#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixedPointValue( 0 )
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( const int value )
{
	std::cout << "Integer constructor called" << std::endl;
	this->_fixedPointValue =  value << _fractionalBits;
	return;
}

Fixed::Fixed( const float value )
{
	this->_fixedPointValue = roundf(value * (1 << _fractionalBits));
	std::cout << "Float constructor called" << std::endl;
	return;
}

Fixed::Fixed( const Fixed &fixed )
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPointValue = fixed.getRawBits();
	return;
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

float	Fixed::toFloat( void ) const {

	return (float)this->_fixedPointValue  / (float(1 << _fractionalBits));
}

int		Fixed::toInt( void ) const {

	return (int)(roundf(this->_fixedPointValue / (1 << _fractionalBits)));
}

Fixed & Fixed::operator=( Fixed const &fixed )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointValue = fixed.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & fixed) {
	o << fixed.toFloat();
	return o;
}

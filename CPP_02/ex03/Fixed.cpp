#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixedPointValue( 0 ) {
	return;
}

Fixed::Fixed( const int value ) {
	this->_fixedPointValue =  value << _fractionalBits;
	return;
}

Fixed::Fixed( const float value ) {
	this->_fixedPointValue = roundf(value * (1 << _fractionalBits));
	return;
}

Fixed::Fixed( const Fixed &fixed ) {
	this->_fixedPointValue = fixed.getRawBits();
	return;
}

Fixed::~Fixed( void ) {
	return;
}

int Fixed::getRawBits( void ) const {
	return this->_fixedPointValue;
}

void Fixed::setRawBits( int const raw ) {
	this->_fixedPointValue = raw;
	return;
}

float	Fixed::toFloat( void ) const {
	return ( float )this->_fixedPointValue  / ( float( 1 << _fractionalBits ) );
}

int		Fixed::toInt( void ) const {
	return ( int )( roundf( this->_fixedPointValue / (1 << _fractionalBits ) ) );
}

Fixed & Fixed::operator=( Fixed const &fixed ) {
	this->_fixedPointValue = fixed.getRawBits();
	return *this;
}

std::ostream & operator<<( std::ostream & o, Fixed const & fixed ) {
	o << fixed.toFloat();
	return o;
}

bool Fixed::operator<( Fixed const & fixed ) const {
	return this->_fixedPointValue < fixed._fixedPointValue;
}

bool Fixed::operator>( Fixed const & fixed ) const {

	return this->_fixedPointValue > fixed._fixedPointValue;
}

bool Fixed::operator<=( Fixed const & fixed ) const {
	return this->_fixedPointValue <= fixed._fixedPointValue;
}

bool Fixed::operator>=( Fixed const & fixed ) const {
	return this->_fixedPointValue >= fixed._fixedPointValue;
}

bool Fixed::operator==( Fixed const & fixed ) const {
	return this->_fixedPointValue == fixed._fixedPointValue;
}

bool Fixed::operator!=( Fixed const & fixed ) const{
	return this->_fixedPointValue != fixed._fixedPointValue;
}

float Fixed::operator+( Fixed const & fixed ) const {
	return this->toFloat() + fixed.toFloat();
}

float Fixed::operator-( Fixed const & fixed ) const {
	return this->toFloat() - fixed.toFloat();
}

float Fixed::operator*( Fixed const & fixed ) const {
	return this->toFloat() * fixed.toFloat();
}

float Fixed::operator/( Fixed const & fixed ) const {
	return this->toFloat() / fixed.toFloat();
}

Fixed & Fixed::operator++() {
	this->_fixedPointValue++;
	return (*this);
}

Fixed & Fixed::operator--() {
	this->_fixedPointValue--;
	return (*this);
}

Fixed Fixed::operator++( int ) {
	Fixed tmp = *this;
	++(*this);
	return (tmp);
}

Fixed Fixed::operator--( int ) {
	Fixed tmp = *this;
	--(*this);
	return (tmp);
}

Fixed & Fixed::min( Fixed & fix1, Fixed & fix2 ) {
	if (fix1 < fix2)
		return fix1;
	return fix2;
}

const Fixed & Fixed::min( Fixed const & fix1, Fixed const & fix2 ) {
	if (fix1 < fix2)
		return fix1;
	return fix2;
}

Fixed & Fixed::max( Fixed & fix1, Fixed & fix2 ) {
	if (fix1 > fix2)
		return fix1;
	return fix2;
}

const Fixed & Fixed::max( Fixed const & fix1, Fixed const & fix2 ) {
	if (fix1 > fix2)
		return fix1;
	return fix2;
}
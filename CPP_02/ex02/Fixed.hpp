#ifndef FIXED_HPP
# define FIXED_HPP
# define DIGITS 1024

# include <ostream>
# include <iostream>
# include <cmath>

class Fixed {

private:
	int _fixedPointValue;
	static const int _fractionalBits = 8;

public:
	Fixed( void );
	Fixed( const int value);
	Fixed( const float value);
	Fixed( const Fixed& refFixed );
	~Fixed(void);

	int getRawBits( void ) const;
	void setRawBits( int const raw) ;
	float toFloat( void ) const;
	int toInt( void ) const;

	Fixed & operator=( Fixed const & fixed );

	//comparison operators overloading

	bool operator<( Fixed const & fixed ) const;
	bool operator>( Fixed const & fixed ) const;
	bool operator<=( Fixed const & fixed ) const;
	bool operator>=( Fixed const & fixed ) const;
	bool operator==( Fixed const & fixed ) const;
	bool operator!=( Fixed const & fixed ) const;

	//arithmetic operators overloading

	float operator+( Fixed const & fixed ) const;
	float operator-( Fixed const & fixed ) const;
	float operator*( Fixed const & fixed ) const;
	float operator/( Fixed const & fixed ) const;

	//increment/decrement overloading

	Fixed & operator++();
	Fixed & operator--();
	Fixed operator++( int );
	Fixed operator--( int );

	//min-max functions

	static Fixed & min( Fixed & fix1, Fixed & fix2 );
	static const Fixed & min( Fixed const & fix1, Fixed const & fix2 );
	static Fixed & max( Fixed & fix1, Fixed & fix2 );
	static const Fixed & max( Fixed const & fix1, Fixed const & fix2 );

};

std::ostream & operator<<(std::ostream & o, Fixed const & fixed);

#endif

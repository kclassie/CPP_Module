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

	Fixed & operator=( Fixed const & fixed );

	int getRawBits( void ) const;
	void setRawBits( int const raw) ;
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & fixed);

#endif

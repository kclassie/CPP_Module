#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point {

private:
	const Fixed x;
	const Fixed y;

public:
	Point( void );
	Point( const float x, const float y );
	Point( const Point& refPoint );
	~Point( void );

	Point & operator=( Point const & point );

	Fixed & getFixedX() const;
	Fixed & getFixedY() const;
	void set_FixedX(const Fixed fix);
	void set_FixedY(const Fixed fix);

};

#endif
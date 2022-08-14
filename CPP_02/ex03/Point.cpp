#include "Point.hpp"

Point::Point( void ) {

	const Fixed fix1;
	const Fixed fix2;
	x = set_FixedX( fix1 );
	y = set_FixedX( fix2 );
	return;
}

Point::Point( const float x, const float y ) {
	this->x = Fixed(x);
	this->y = Fixed(y);
	return;
}

Point::Point( const Point& refPoint ) {
	this->x = refPoint.x;
	this->y = refPoint.y;
}

Point::~Point( void ) {
	return;
}


Point & Point::operator=( Point const & point ) {
	this->x = point.x;
	this->y = point.y;
	return (this);
}

Fixed & Point::getFixedX() const {
	return this->x;
}

Fixed & Point::getFixedY() const {
	return this->y;
}

void Point::set_FixedX(const Fixed fix) {
	this->x = fix;
}

void Point::set_FixedY(const Fixed fix) {
	this->y = fix;
}
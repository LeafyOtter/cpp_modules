#include "Fixed.hpp"
#include "Point.hpp"

Point::Point( void ) : x(Fixed(0)), y(Fixed(0)) {}

Point::Point( float a, float b ) : x(Fixed(a)), y(Fixed(b)) {}

Point::Point( const Point& old ) : x(Fixed(old.x)), y(Fixed(old.y)) {}

Point&	Point::operator = (Point const &rhs) {
	this->x = rhs.x;
	this->y = rhs.y;
}

Point::~Point( void ) {

}

#pragma once
#ifndef __POINT_H__

#include "Fixed.hpp"

class Point {

	public :
		Point( void );
		Point( float a, float b );
		Point( const Point& old);

		Point&	operator = (Point const &rhs);

		~Point( void );

	private:
		Fixed const	x;
		Fixed const	y;

};

#endif
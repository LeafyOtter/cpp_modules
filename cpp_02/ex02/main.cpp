#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
		Fixed c(2.42f);
		Fixed d(42.32f);
		Fixed e(23.0f), f(23.0f);

		LOG_MSG("------------ MY TESTS --------------");
		LOG_MSG(c + d);
		LOG_MSG(c - d);
		LOG_MSG(c * d);
		LOG_MSG(c / d);
		LOG_MSG(c);
		LOG_MSG(--c);
		LOG_MSG(c);
		LOG_MSG(c--);
		LOG_MSG(c);
		LOG_MSG("------------ Logic tests -----------");
		LOG_MSG((c > d ? c : d));
		LOG_MSG((c >= d ? c : d));
		LOG_MSG((c < d ? c : d));
		LOG_MSG((c <= d ? c : d));
		LOG_MSG((c == d ? "Equal" : "Not equal"));
		LOG_MSG((c != d ? "Not equal" : "Equal"));
		LOG_MSG((e == f ? "Equal" : "Not equal"));
		LOG_MSG(Fixed::min(c, d));
	}
	return 0;
}

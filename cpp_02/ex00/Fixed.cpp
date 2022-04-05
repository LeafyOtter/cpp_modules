#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( void ) {
	LOG_MSG("Default constructor called");
	_value = 0;
}

Fixed::Fixed( const Fixed& old) {
	LOG_MSG("Copy constructor called");
	_value = old.getRawBits();
}

Fixed& Fixed::operator = (Fixed const &rhs) {
	LOG_MSG("Copy assignment operator called");
	_value = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed( void ) {
	LOG_MSG("Destructor called");
}

int	Fixed::getRawBits( void ) const {
	LOG_MSG("getRawBits member function called");
	return (_value);
}

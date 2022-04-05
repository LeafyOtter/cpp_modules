#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed( void ) {
	LOG_MSG("Default constructor called");
	this->setRawBits(0);
}

Fixed::Fixed( int value) {
	LOG_MSG("Int constructor called");
	this->setRawBits(value << _nb_bits);
}

Fixed::Fixed( float value) {
	LOG_MSG("Float constructor called");
	this->setRawBits(roundf(value * (1 << _nb_bits)));
}

Fixed::Fixed( const Fixed& old) {
	LOG_MSG("Copy constructor called");
	this->setRawBits(old.getRawBits());
}

Fixed& Fixed::operator = (Fixed const &rhs) {
	LOG_MSG("Copy assignment operator called");
	this->setRawBits(rhs.getRawBits());
	return *this;
}

Fixed::~Fixed( void ) {
	LOG_MSG("Destructor called");
}

int		Fixed::getRawBits( void ) const {
//	LOG_MSG("getRawBits member function called");
	return (_value);
}

void	Fixed::setRawBits( int const raw ) {
	_value = raw;
}

int		Fixed::toInt( void ) const {
	return (this->getRawBits() >> _nb_bits);
}

float	Fixed::toFloat( void ) const {
	return static_cast<float> (this->getRawBits()) / (1 << _nb_bits);
}

std::ostream &	operator << ( std::ostream & o, Fixed const & i) {
	return (o << i.toFloat());
}

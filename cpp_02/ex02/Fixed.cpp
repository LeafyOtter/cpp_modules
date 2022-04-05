#include "Fixed.hpp"
#include <cmath>

/*
 *		Constructors
 */

Fixed::Fixed( void ) {
//	LOG_MSG("Default constructor called");
	this->setRawBits(0);
}

Fixed::Fixed( int value) {
//	LOG_MSG("Int constructor called");
	this->setRawBits(value << _nb_bits);
}

Fixed::Fixed( float value) {
//	LOG_MSG("Float constructor called");
	this->setRawBits(roundf(value * (1 << _nb_bits)));
}

Fixed::Fixed( const Fixed& old) {
//	LOG_MSG("Copy constructor called");
	this->setRawBits(old.getRawBits());
}

/*
 *		Overloads
 */

Fixed& Fixed::operator = (Fixed const &rhs) {
//	LOG_MSG("Copy assignment operator called");
	this->setRawBits(rhs.getRawBits());
	return *this;
}

bool	Fixed::operator >	(Fixed const &rhs) const {
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator <	(Fixed const &rhs) const {
	return (this->getRawBits() < rhs.getRawBits());;
}

bool	Fixed::operator >=	(Fixed const &rhs) const {
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator <=	(Fixed const &rhs) const {
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator ==	(Fixed const &rhs) const {
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator !=	(Fixed const &rhs) const {
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed	Fixed::operator +	(Fixed const &rhs) const {
	Fixed	fixed;

	fixed.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (fixed);
}

Fixed	Fixed::operator -	(Fixed const &rhs) const {
	Fixed	fixed;

	fixed.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (fixed);
}

Fixed	Fixed::operator *	(Fixed const &rhs) const {
	Fixed	fixed;

	fixed.setRawBits((this->getRawBits() * rhs.getRawBits()) >> _nb_bits);
	return (fixed);
}

Fixed	Fixed::operator /	(Fixed const &rhs) const {
	Fixed	fixed;

	fixed.setRawBits((this->getRawBits() << _nb_bits) / rhs.getRawBits());
	return fixed;
}

Fixed	Fixed::operator ++	( void ) {
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	Fixed::operator ++	( int) {
	Fixed fixed = *this;
	this->setRawBits(this->getRawBits() + 1);
	return (fixed);
}

Fixed	Fixed::operator --	( void ) {
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator --	( int) {
	Fixed fixed = *this;
	this->setRawBits(this->getRawBits() - 1);
	return (fixed);
}

std::ostream &	operator << ( std::ostream & o, Fixed const & i) {
	return (o << i.toFloat());
}

/*
 *		Public overloaded member functions
 */

Fixed &			Fixed::min( Fixed & a, Fixed & b ) {
	return ((a < b) ? a : b);
}

const Fixed &	Fixed::min( const Fixed & a, const Fixed & b ) {
	return ((a < b) ? a : b);
}

Fixed &			Fixed::max( Fixed & a, Fixed & b ) {
	return ((a > b) ? a : b);
}

const Fixed &	Fixed::max( const Fixed & a, const Fixed & b ) {
	return ((a > b) ? a : b);
}

/*
 *		Destructor
 */

Fixed::~Fixed( void ) {
//	LOG_MSG("Destructor called");
}

/*
 *		Member functions
 */

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


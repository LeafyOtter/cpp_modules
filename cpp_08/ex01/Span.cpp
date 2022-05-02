#include "Span.hpp"
#include <algorithm>

Span::Span( unsigned int N ) : _N(N)
{
	//
}

Span::Span( const Span &rhs ) : _N(rhs._N)
{
	_v = rhs._v;
	*this = rhs;
}

Span & Span::operator = ( const Span &rhs )
{
	_N = rhs._N;
	_v = rhs._v;
	return (*this);
}

Span::~Span( void )
{
	//
}

void	Span::addNumber( int newNumber )
{
	if (_v.size() + 1 > _N)
		throw SpanFullException();
	_v.push_back(newNumber);
}

int		Span::shortestSpan( void )
{
	if (_v.size() <= 1)
		throw InvalidNumberSpanException();
	std::vector<int> new_v(_v);
	std::sort(new_v.begin(), new_v.end());
	int	min = new_v.end() - new_v.begin();

	for (std::vector<int>::iterator i = new_v.begin(); i != new_v.end() - 1; i++) {
		if ((*(i + 1) - *i) < min)
			min = *(i + 1) - *i;
	}
	return (min);
}

int		Span::longestSpan( void )
{
	if (_v.size() <= 1)
		throw InvalidNumberSpanException();
	int	min = *std::min_element(_v.begin(), _v.end());
	int max = *std::max_element(_v.begin(), _v.end());
	return (max - min);
}

void	Span::fill( int max )
{
	unsigned int to_fill = _v.size();

	srand(time(0));
	for (unsigned int i = to_fill; i < _N; i++) {
		_v.push_back(rand() % max);
	}
}

const char *Span::InvalidNumberSpanException::what( void ) const throw()
{
	return ("SpanException: Invalid size.");
}

const char *Span::SpanFullException::what( void ) const throw()
{
	return ("SpanException: Span is full.");
}
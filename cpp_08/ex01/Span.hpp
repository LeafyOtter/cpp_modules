#pragma once
#ifndef __SPAN_H__

#include <exception>
#include <vector>
#include <cstdlib>
#include <ctime>

class Span
{
	public:
		Span( unsigned int N );
		Span( const Span &rhs );
		Span & operator = ( const Span &rhs );
		~Span( void );

		void	addNumber( int newNumber );
		int		shortestSpan( void );
		int		longestSpan( void );

		void	fill( int max );

		class InvalidNumberSpanException : public std::exception {
			const char*	what( void ) const throw();
		};

		class SpanFullException : public std::exception {
			const char*	what( void ) const throw();
		};

	private:
		Span( void );

		unsigned int		_N;
		std::vector<int>	_v;	
};

#endif
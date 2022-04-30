#pragma once
#ifndef __SPAN_H__

#include <exception>

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

		class NoNumberSpan : public std::exception {
			const char*	what( void ) const throw();
		};

		class UniqueNumberSpan : public std::exception {
			const char*	what( void ) const throw();
		};

	private:
		Span( void );

		int				*_ptr;
		unsigned int	_N;
};

#endif
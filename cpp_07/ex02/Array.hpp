#pragma once
#ifndef __ARRAY_H__

template <typename T>

class Array
{
	public:
		Array( void );
		Array( unsigned int i );
		Array( const Array<T> &rhs );
		~Array( void );

		Array<T> & operator = ( const Array &rhs );
		T & operator [] ( unsigned int index );

		unsigned int	size( void ) const;

		class OutOfBounds : public std::exception {
			const char*	what( void ) const throw();
		};

	private:
		T				*_ptr;
		unsigned int	_length;
};

#include "Array.tpp"

#endif
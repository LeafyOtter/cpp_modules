#pragma once
#ifndef __MUTANTSTACK_H__

#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>( void ) {}
		MutantStack<T>( const MutantStack &rhs ) : std::stack<T>(rhs) {}
		~MutantStack<T>( void ) {}
		MutantStack<T> &operator = ( const MutantStack &rhs ) {
			if (this != &rhs) {
				std::stack<T>::operator=(rhs);
			}
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin ( void )
		{ return this->c.begin();}
		iterator end ( void )
		{ return this->c.end();}
};

#endif
#pragma once
#ifndef __BRAIN_H__

#include <iostream>

#define LOG(x) std::cout << x << std::endl

class Brain
{
	public :
		Brain( void );
		Brain( const Brain &rhs );
		~Brain( void );
		Brain & operator = ( const Brain &rhs );

		void	newIdea( std::string idea );
		void	printIdeas( void );

	private :
		size_t		index;
		std::string	ideas[100];
};

#endif
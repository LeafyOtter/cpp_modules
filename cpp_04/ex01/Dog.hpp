#pragma once
#ifndef __CAT_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public :
		Dog( void );
		Dog( const Dog &rhs );
		virtual ~Dog( void );
		Dog & operator = ( const Dog &rhs );

		void	makeSound( void ) const;
		void	newIdea( std::string idea );
		void	printIdeas( void );

	private :
		Brain	*_brain;
};

#endif
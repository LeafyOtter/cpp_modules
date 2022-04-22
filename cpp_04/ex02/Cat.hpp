#pragma once
#ifndef __CAT_H__

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public :
		Cat( void );
		Cat( const Cat &rhs );
		virtual ~Cat( void );
		Cat & operator = ( const Cat &rhs );

		void	makeSound( void ) const;
		void	newIdea( std::string idea );
		void	printIdeas( void );

	private :
		Brain	*_brain;
};

#endif
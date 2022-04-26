#pragma once
#ifndef __INTERN_H__

#include <string>
#include "Form.hpp"

class Form;

class Intern
{
	public:
		Intern( void );
		Intern( const Intern &rhs );
		~Intern( void );
		Intern & operator = ( const Intern &rhs );

		Form *makeForm( std::string form, std::string target );
};

#endif
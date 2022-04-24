#pragma once
#ifndef __SHRUBBERYCREATIONFORM_H__

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;

#define LOG(x) std::cout << x << std::endl

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm( std::string name );
		ShrubberyCreationForm( const ShrubberyCreationForm &rhs );
		~ShrubberyCreationForm( void );
		ShrubberyCreationForm & operator = ( const ShrubberyCreationForm &rhs );

	void	execute(Bureaucrat const &executor) const;

	std::string	getTarget( void ) const;

	private:
		ShrubberyCreationForm( void );
		std::string	_target;
};

#endif
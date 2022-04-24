#pragma once
#ifndef __PRESIDENTIALPARDONFORM_H__

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;

#define LOG(x) std::cout << x << std::endl

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm( std::string name );
		PresidentialPardonForm( const PresidentialPardonForm &rhs );
		~PresidentialPardonForm( void );
		PresidentialPardonForm & operator = ( const PresidentialPardonForm &rhs );

	void	execute(Bureaucrat const &executor) const;

	std::string	getTarget( void ) const;

	private:
		PresidentialPardonForm( void );
		std::string	_target;
};

#endif
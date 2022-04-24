#pragma once
#ifndef __ROBOTOMYREQUESTFORM_H__

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class Bureaucrat;

#define LOG(x) std::cout << x << std::endl

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm( std::string name );
		RobotomyRequestForm( const RobotomyRequestForm &rhs );
		~RobotomyRequestForm( void );
		RobotomyRequestForm & operator = ( const RobotomyRequestForm &rhs );

	void	execute(Bureaucrat const &executor) const;

	std::string	getTarget( void ) const;

	private:
		RobotomyRequestForm( void );
		std::string	_target;
};

#endif
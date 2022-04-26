#pragma once
#ifndef __BUREAUCRAT_H__

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

#define HIGHEST_GRADE	1
#define LOWEST_GRADE	150

#define DEBUG false
#define LOG(x) std::cout << x << std::endl

class Bureaucrat
{
	public:
		Bureaucrat( std::string name, int32_t grade );
		Bureaucrat( const Bureaucrat &rhs );
		~Bureaucrat( void );
		Bureaucrat & operator = ( const Bureaucrat &rhs );
		

		std::string		getName( void ) const;
		uint32_t		getGrade( void ) const;

		void			signForm( Form &form ) const;
		void			executeForm(Form const & form);

		void			incrementGrade( void );
		void			decrementGrade( void );

		struct GradeTooLowException : public std::exception {
			const char*	what( void ) const throw();
		};

		struct GradeTooHighException : public std::exception {
			const char*	what( void ) const throw();
		};

	private:
		Bureaucrat( void );

		const std::string		_name;
		uint32_t				_grade;
};

std::ostream &	operator << ( std::ostream & o, Bureaucrat const & i);

#endif
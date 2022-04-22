#pragma once
#ifndef __FORM_H__

#include <string>
#include <stdint.h>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

#define HIGHEST_GRADE	1
#define LOWEST_GRADE	150

#define DEBUG false
#define LOG(x) std::cout << x << std::endl

typedef long ssize_t;

class Form
{
	public:
		Form( std::string name, int32_t gradeSign, int32_t gradeExec);
		Form( const Form &rhs );
		~Form( void );
		Form & operator = ( const Form &rhs );
		

		std::string		getName( void ) const;
		uint32_t		getGradeSign( void ) const;
		uint32_t		getGradeExec( void ) const;
		bool			getIsSigned( void ) const;

		void			beSigned( Bureaucrat bureaucrat );

		struct GradeTooLowException : public std::exception {
			const char*	what( void ) const throw();
		};

		struct GradeTooHighException : public std::exception {
			const char*	what( void ) const throw();
		};

	private:
		Form( void );

		const std::string	_name;
		const uint32_t		_gradeSign;
		const uint32_t		_gradeExec;
		bool				_isSigned;

};

std::ostream &	operator << ( std::ostream & o, Form const & i);

#endif
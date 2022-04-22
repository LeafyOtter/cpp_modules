#pragma once
#ifndef __BUREAUCRAT_H__

#include <string>
#include <iostream>

#define HIGHEST_GRADE	1
#define LOWEST_GRADE	150

#define DEBUG false
#define LOG(x) std::cout << x << std::endl

typedef long ssize_t;

class Bureaucrat
{
	public:
		Bureaucrat( std::string name, ssize_t grade );
		Bureaucrat( const Bureaucrat &rhs );
		~Bureaucrat( void );
		Bureaucrat & operator = ( const Bureaucrat &rhs );
		

		size_t		getGrade( void ) const;
		std::string	getName( void ) const;

		void		incrementGrade( void );
		void		decrementGrade( void );

		struct GradeTooLowException : public std::exception {
			const char*	what( void ) const throw();
		};

		struct GradeTooHighException : public std::exception {
			const char*	what( void ) const throw();
		};

	private:
		Bureaucrat( void );

		size_t				_grade;
		const std::string	_name;
};

std::ostream &	operator << ( std::ostream & o, Bureaucrat const & i);

#endif
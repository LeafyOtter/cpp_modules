#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern( void )
{
	/*	//	*/
}

Intern::Intern( const Intern &rhs )
{
	/*	//	*/
	(void)rhs;
}

Intern::~Intern( void )
{
	/*	//	*/
}

Intern & Intern::operator = ( const Intern &rhs )
{
	(void)rhs;
	return (*this);
}

static Form *createPresidentialForm( std::string target )
{
	return (new PresidentialPardonForm(target));
}

static Form *createRobotomyForm( std::string target )
{
	return (new RobotomyRequestForm(target));
	
}

static Form *createShrubberyForm( std::string target )
{
	return (new ShrubberyCreationForm(target));

}

Form *Intern::makeForm( std::string form, std::string target )
{
	std::string formName[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	Form *(*createForm[])(std::string) = {&createPresidentialForm, &createRobotomyForm, &createShrubberyForm};

	for (int i = 0; i < 3; i++) {
		if (formName[i] == form) {
			std::cout << "Intern creates " << form << std::endl;
			return (createForm[i](target));
		}
	}
	std::cerr << form << " is not a valid form" << std::endl;
	return (NULL);
}
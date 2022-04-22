#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) :
	Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	if (DEBUG)
		LOG("Constructor of class <ShrubberyCreationForm> called");
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &rhs ) : 
	Form(rhs)
{
	if (DEBUG)
		LOG("Copy constructor of class <ShrubberyCreationForm> called");
	*this = rhs;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	if (DEBUG)
		LOG("Destructor of class <ShrubberyCreationForm> called");
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = ( const ShrubberyCreationForm &rhs )
{
	if (DEBUG)
		LOG("Copy assignement operator for class <ShrubberyCreationForm> called");
	return (*this);
}

void	executeForm(Form const & form)
{
	std::cout << "Add tree in a file\n";
	std::cout << "Placeholder";
	std::cout << std::endl;
}
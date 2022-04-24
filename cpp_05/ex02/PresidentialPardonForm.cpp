#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) :
	Form("PresidentialPardonForm", 25, 5), _target(target)
{
	if (DEBUG)
		LOG("Constructor of class <PresidentialPardonForm> called");
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &rhs ) : 
	Form(rhs)
{
	if (DEBUG)
		LOG("Copy constructor of class <PresidentialPardonForm> called");
	*this = rhs;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	if (DEBUG)
		LOG("Destructor of class <PresidentialPardonForm> called");
}

PresidentialPardonForm & PresidentialPardonForm::operator = ( const PresidentialPardonForm &rhs )
{
	if (DEBUG)
		LOG("Copy assignement operator for class <PresidentialPardonForm> called");
	_target = rhs._target;
	return (*this);
}

std::string	PresidentialPardonForm::getTarget( void ) const
{
	return (_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	if (!this->getIsSigned())
		throw FormNotSigned();
	std::cout << this->getTarget();
	std::cout << " has been pardoned by suprem leader, Zaphod Beeblebrox.";
	std::cout << std::endl;
}
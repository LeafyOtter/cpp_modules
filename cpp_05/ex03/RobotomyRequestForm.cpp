#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm( std::string target ) :
	Form("RobotomyRequestForm", 72, 56), _target(target)
{
	if (DEBUG)
		LOG("Constructor of class <RobotomyRequestForm> called");
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &rhs ) : 
	Form(rhs)
{
	if (DEBUG)
		LOG("Copy constructor of class <RobotomyRequestForm> called");
	*this = rhs;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	if (DEBUG)
		LOG("Destructor of class <RobotomyRequestForm> called");
}

RobotomyRequestForm & RobotomyRequestForm::operator = ( const RobotomyRequestForm &rhs )
{
	if (DEBUG)
		LOG("Copy assignement operator for class <RobotomyRequestForm> called");
	_target = rhs._target;
	return (*this);
}

std::string	RobotomyRequestForm::getTarget( void ) const
{
	return (_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	if (!this->getIsSigned())
		throw FormNotSigned();
	srand(time(0));
	std::cout << "[Power drill sound effect - 8 hours]" << "\n";
	if (rand() % 2)
		std::cout << this->getTarget() << " has been robotomized.";
	else {
		std::cout << "Robotomization has failed. " << this->getTarget();
		std::cout << " has became sentient.";
	}
	std::cout << std::endl;
}
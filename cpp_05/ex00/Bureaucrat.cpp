#include "Bureaucrat.hpp"

static void	checkGrade( ssize_t grade )
{
	if (grade < HIGHEST_GRADE)
		throw Bureaucrat::GradeTooHighException();
	if (grade > LOWEST_GRADE)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( std::string name, ssize_t grade ) :
	_grade(grade), _name(name)
{
	checkGrade(grade);
	if (DEBUG)
		LOG("Constructor of class <Bureaucrat> called");
}

Bureaucrat::Bureaucrat( const Bureaucrat &rhs ) : 
	_grade(rhs._grade), _name(rhs._name)
{
	if (DEBUG)
		LOG("Copy constructor of class <Bureaucrat> called");
}

Bureaucrat::~Bureaucrat( void )
{
	if (DEBUG)
		LOG("Destructor of class <Bureaucrat> called");
}

Bureaucrat & Bureaucrat::operator = ( const Bureaucrat &rhs )
{
	if (DEBUG)
		LOG("Copy assignement operator for class <Bureaucrat> called");
	this->_grade = rhs._grade;
	return (*this);
}

size_t	Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

std::string	Bureaucrat::getName( void ) const
{
	return (this->_name);
}

void	Bureaucrat::incrementGrade( void )
{
	checkGrade(_grade - 1);
	_grade -= 1;
	if (DEBUG)
		LOG("Incrementing grade successfully");
}

void	Bureaucrat::decrementGrade( void )
{
	checkGrade(_grade + 1);
	_grade += 1;
	if (DEBUG)
		LOG("Decrementing grade successfully");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("BureaucratException: Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("BureaucratException: Grade too low");
}

std::ostream &	operator << ( std::ostream & o, Bureaucrat const &i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << ".";
	return (o);
}
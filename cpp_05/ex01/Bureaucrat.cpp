#include "Bureaucrat.hpp"

static void	checkGrade( int32_t grade )
{
	if (grade < HIGHEST_GRADE)
		throw Bureaucrat::GradeTooHighException();
	if (grade > LOWEST_GRADE)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( std::string name, int32_t grade ) :
	_name(name), _grade(grade)
{
	checkGrade(grade);
	if (DEBUG)
		LOG("Constructor of class <Bureaucrat> called");
}

Bureaucrat::Bureaucrat( const Bureaucrat &rhs ) : 
	_name(rhs._name), _grade(rhs._grade)
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

uint32_t	Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

std::string	Bureaucrat::getName( void ) const
{
	return (this->_name);
}

void	Bureaucrat::signForm( Form &form ) const
{
	if (form.getIsSigned())
	{
		std::cout << this->getName() << " couldn't sign " << form.getName();
		std::cout << " because : it's already been signed";
		std::cout << std::endl;
		return ;
	}

	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName();
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn't sign " << form.getName();
		std::cout << " because : " << e.what();
		std::cout << std::endl;
	}
	
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
#include "Form.hpp"

static void	checkGrade( int32_t grade )
{
	if (grade < HIGHEST_GRADE)
		throw Form::GradeTooHighException();
	if (grade > LOWEST_GRADE)
		throw Form::GradeTooLowException();
}

Form::Form( std::string name, int32_t gradeSign, int32_t gradeExec ) :
	_name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	checkGrade(gradeSign);
	checkGrade(gradeExec);
	_isSigned = false;
	if (DEBUG)
		LOG("Constructor of class <Form> called");
}

Form::Form( const Form &rhs ) : 
	_name(rhs._name), _gradeSign(rhs._gradeSign), 
	_gradeExec(rhs._gradeExec), _isSigned(rhs._isSigned)
{
	if (DEBUG)
		LOG("Copy constructor of class <Form> called");
}

Form::~Form( void )
{
	if (DEBUG)
		LOG("Destructor of class <Form> called");
}

Form & Form::operator = ( const Form &rhs )
{
	if (DEBUG)
		LOG("Copy assignement operator for class <Form> called");
	this->_isSigned = rhs._isSigned;
	return (*this);
}

std::string	Form::getName( void ) const
{
	return (this->_name);
}

uint32_t	Form::getGradeSign( void ) const
{
	return (this->_gradeSign);
}

uint32_t	Form::getGradeExec( void ) const
{
	return (this->_gradeExec);
}

bool		Form::getIsSigned( void ) const
{
	return (this->_isSigned);
}

void		Form::beSigned( Bureaucrat bureaucrat )
{
	if (bureaucrat.getGrade() > this->getGradeSign())
		throw Form::GradeTooLowException();
	this->_isSigned = true;
}


const char* Form::GradeTooHighException::what() const throw()
{
	return ("FormException: Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("FormException: Grade too low");
}

const char* Form::FormNotSigned::what() const throw()
{
	return("FormException: Form is not signed");
}


std::ostream &	operator << ( std::ostream & o, Form const &i)
{
	o << "Form : " << i.getName();
	o << ", grade to sign : " << i.getGradeSign();
	o << ", grade to execute : " << i.getGradeExec();
	o << ", is signed : " << (i.getIsSigned() ? "yes" : "no");
	return (o);
}
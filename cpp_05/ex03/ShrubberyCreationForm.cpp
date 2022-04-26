#include "ShrubberyCreationForm.hpp"
#include <fstream>

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
	_target = rhs._target;
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget( void ) const
{
	return (_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string		filename(this->getTarget() + "_shrubbery");
	std::ofstream	outfile(filename.c_str());

	outfile.exceptions ( std::ofstream::failbit | std::ofstream::badbit );

	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowException();
	if (!this->getIsSigned())
		throw FormNotSigned();

	outfile << "         - - -" << "\n";
	outfile << "       -        -  -     --    -" << "\n";
	outfile << "    -                 -         -  -" << "\n";
	outfile << "                    -" << "\n";
	outfile << "                   -                --" << "\n";
	outfile << "   -          -            -              -" << "\n";
	outfile << "   -            '-,        -               -" << "\n";
	outfile << "   -              'b      *" << "\n";
	outfile << "    -              '$    #-                --" << "\n";
	outfile << "   -    -           $:   #:               -" << "\n";
	outfile << " --      -  --      *#  @):        -   - -" << "\n";
	outfile << "              -     :@,@):   ,-**:'   -" << "\n";
	outfile << "  -      -,         :@@*: --**'      -   -" << "\n";
	outfile << "           '#o-    -:(@'-@*\"'  -" << "\n";
	outfile << "   -  -       'bq,--:,@@*'   ,*      -  -" << "\n";
	outfile << "              ,p$q8,:@)'  -p*'      -" << "\n";
	outfile << "       -     '  - '@@Pp@@*'    -  -" << "\n";
	outfile << "        -  - --    Y7'.'     -  -" << "\n";
	outfile << "                  :@):." << "\n";
	outfile << "                 .:@:'." << "\n";
	outfile << "               .::(@:.      -Sam Blumenstein-" << std::endl;
	outfile.close();
}
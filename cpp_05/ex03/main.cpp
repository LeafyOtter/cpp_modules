#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Bureaucrat one("Bobby", 1);

	{
		Intern	someRandomIntern;
		Form	*rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		one.signForm(*rrf);
		one.executeForm(*rrf);
		delete rrf;

		rrf = someRandomIntern.makeForm("adawda dadwa", "hi");
	}
}

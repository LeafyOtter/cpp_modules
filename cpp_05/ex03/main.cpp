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
		Form	*rsf;
		Form	*rpf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rsf = someRandomIntern.makeForm("shrubbery creation", "home");
		rpf = someRandomIntern.makeForm("presidential pardon", "Bob");
		one.signForm(*rrf);
		one.executeForm(*rrf);
		delete rrf;
		delete rsf;
		delete rpf;

		rrf = someRandomIntern.makeForm("adawda dadwa", "hi");
	}
}

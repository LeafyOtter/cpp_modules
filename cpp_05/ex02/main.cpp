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
	Bureaucrat two("Dobby", 45);
	Bureaucrat three("Tobby", 150);

	{
		Intern intern();


		one.executeForm(form);
		three.signForm(form);
		two.signForm(form);
		one.signForm(form);
		three.executeForm(form);
		two.executeForm(form);
		one.executeForm(form);


	}

}

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat one("Bobby", 1);
	Bureaucrat two("Dobby", 45);
	Bureaucrat three("Tobby", 150);

	{
		PresidentialPardonForm form("Saolirr");
		one.executeForm(form);	// not signed
		three.signForm(form);	// not graded enough
		two.signForm(form);		// not graded enough
		one.signForm(form);		// success
		three.executeForm(form);// not graded enough
		two.executeForm(form);	// not graded enough
		one.executeForm(form);	// success
	}
	std::cout << "-----------------------------------------------";
	std::cout << "-----------------------------------------------";
	std::cout << std::endl;
	{
		RobotomyRequestForm form("Mursili");
		one.executeForm(form);	// not signed
		three.signForm(form);	// not graded enough
		two.signForm(form);		// success
		one.signForm(form);		// already signed
		three.executeForm(form);// not graded enough
		two.executeForm(form);	// success
	}
	std::cout << "-----------------------------------------------";
	std::cout << "-----------------------------------------------";
	std::cout << std::endl;
	{
		ShrubberyCreationForm form("home");
		one.executeForm(form);	// not signed
		three.signForm(form);	// not graded enough
		two.signForm(form);		// success
		one.signForm(form);		// already signed
		three.executeForm(form);// not graded enough
		two.executeForm(form);	// success
	}
}

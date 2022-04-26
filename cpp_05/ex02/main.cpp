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
		one.executeForm(form);
		three.signForm(form);
		two.signForm(form);
		one.signForm(form);
		three.executeForm(form);
		two.executeForm(form);
		one.executeForm(form);
	}
	std::cout << "-----------------------------------------------";
	std::cout << "-----------------------------------------------";
	std::cout << std::endl;
	{
		RobotomyRequestForm form("Mursili");
		one.executeForm(form);
		three.signForm(form);
		two.signForm(form);
		one.signForm(form);
		three.executeForm(form);
		two.executeForm(form);
	}
	std::cout << "-----------------------------------------------";
	std::cout << "-----------------------------------------------";
	std::cout << std::endl;
	{
		ShrubberyCreationForm form("home");
		one.executeForm(form);
		three.signForm(form);
		two.signForm(form);
		one.signForm(form);
		three.executeForm(form);
		two.executeForm(form);
	}
}

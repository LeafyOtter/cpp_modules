#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	{
		Form *form1 = new Form("Form B23", 21, 42);
		Bureaucrat *bureaucrat = new Bureaucrat("Robert", 2);

		bureaucrat->signForm(*form1);
		bureaucrat->signForm(*form1);

		delete form1;
		delete bureaucrat;
	}
	{
		Bureaucrat *bureaucrat = new Bureaucrat("Robert", 2);
		Form *form2 = new Form("Form A23", 1, 42);

		bureaucrat->signForm(*form2);

		delete form2;
		delete bureaucrat;
	}
	{
		try
		{
			Form *form3 = new Form("Form B28", -1, 42);
			std::cout << *form3 << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		Form form4 = Form("Form x241", 3, 6);
		Bureaucrat bureaucrat = Bureaucrat("Bobby", 2);

		std::cout << form4 << std::endl;
		form4.beSigned(bureaucrat);
		std::cout << form4 << std::endl;
	}
}
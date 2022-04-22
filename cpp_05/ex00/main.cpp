#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat *bureau1 = new Bureaucrat("Rob", 4);

		std::cout << *bureau1 << std::endl;
		bureau1->decrementGrade();
		std::cout << *bureau1 << std::endl;
		delete bureau1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat* bureau2 = new Bureaucrat("Bob", 0);

		std::cout << *bureau2 << std::endl;
		delete bureau2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat* bureau3 = new Bureaucrat("Job", 151);

		std::cout << *bureau3 << std::endl;
		delete bureau3;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat* bureau4 = new Bureaucrat("Gob", 1);

		std::cout << *bureau4 << std::endl;
		bureau4->incrementGrade();
		delete bureau4;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat* bureau5 = new Bureaucrat("Nob", 150);

		std::cout << *bureau5 << std::endl;
		bureau5->decrementGrade();
		delete bureau5;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
}
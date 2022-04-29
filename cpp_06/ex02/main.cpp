#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

#define log(x) std::cout << x << std::endl
#define DEBUG false

Base	*generate(void)
{
	srand(time(0));

	int	i = rand();

	switch (i % 3)
	{
		case 0:
			if (DEBUG)
				log("Creating A.");
			return (new A);
			break;
		case 1:
			if (DEBUG)
				log("Creating B.");
			return (new B);
			break;
		case 2:
			if (DEBUG)
				log("Creating C.");
			return (new C);
			break;
	}
	return (NULL);
}

void	identify(Base *p)
{
	Base *ptr;

	ptr = dynamic_cast<A*>(p);
	if (ptr) {
		std::cout << "Class was identified as <A>" << std::endl;
		return ;
	}
	ptr = dynamic_cast<B*>(p);
	if (ptr) {
		std::cout << "Class was identified as <B>" << std::endl;
		return ;
	}
	ptr = dynamic_cast<C*>(p);
	if (ptr) {
		std::cout << "Class was identified as <C>" << std::endl;
		return ;
	}
	std::cout << "Error" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		Base &ref = dynamic_cast<A&>(p);
		(void)ref;
		std::cout << "Class was identified as <A>" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		Base &ref = dynamic_cast<B&>(p);
		(void)ref;
		std::cout << "Class was identified as <B>" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		Base &ref = dynamic_cast<C&>(p);
		(void)ref;
		std::cout << "Class was identified as <C>" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	std::cout << "Error" << std::endl;
}

int	main(void)
{
	Base *ptr1 = generate();

	identify(ptr1);
	identify(*ptr1);
	return (0);
}
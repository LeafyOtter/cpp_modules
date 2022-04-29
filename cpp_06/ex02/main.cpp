#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base	*generate(void)
{
	srand(time(0));

	int	i = rand();

	switch (i % 3)
	{
		case 0:
			return (new A);
			break;
		case 1:
			return (new B);
			break;
		case 2:
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
		std::cout << "A" << std::endl;
		return ;
	}
	ptr = dynamic_cast<B*>(p);
	if (ptr) {
		std::cout << "B" << std::endl;
		return ;
	}
	ptr = dynamic_cast<C*>(p);
	if (ptr) {
		std::cout << "C" << std::endl;
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
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		Base &ref = dynamic_cast<B&>(p);
		(void)ref;
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		Base &ref = dynamic_cast<C&>(p);
		(void)ref;
		std::cout << "C" << std::endl;
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
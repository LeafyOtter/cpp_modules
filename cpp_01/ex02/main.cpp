#include <iostream>
#include <string>

int	main( void ) {
	std::string		var = "HI THIS IS BRAIN";
	std::string*	stringPTR = &var;
	std::string&	stringREF = var;

	std::cout << "Memory address of var : " << &var << std::endl;
	std::cout << "Memory address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF : " << &stringREF << std::endl;

	std::cout << "Value of var : " << var << std::endl;
	std::cout << "Value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF : " << stringREF << std::endl;
}
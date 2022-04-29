#include "iter.hpp"
#include <string>

int main(void)
{
	{
		int	length = 5;
		int array_int[] = {4, 5, 41, 32, 72};
		iter(array_int, length, &print);
		std::cout << std::endl;
	}
	{
		int	length = 5;
		float array_float[] = {4.3, 5.0, 41.521, 32.32, 72.01};
		iter(array_float, length, &print);
		std::cout << std::endl;
	}
	{
		int	length = 7;
		std::string array_str[] = {"Hello", "World", "I", "love", "otters", "and", "templates"};
		iter(array_str, length, &print);
		std::cout << std::endl;
	}
}
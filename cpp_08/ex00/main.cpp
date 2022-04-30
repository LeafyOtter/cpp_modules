#include "easyfind.hpp"
#include <deque>
#include <queue>
#include <list>
#include <vector>

int main(int, char **)
{
	try {
		std::vector<int> vec;

		for (int i = 1; i <= 10; i++) {
			vec.push_back(i);
		}
		std::vector<int>::iterator fd = easyfind(vec, 2);
		std::cout << "Value found in vector:\t" << *fd << std::endl;
		fd = easyfind(vec, 124);
		std::cout << "Value found in vector:\t" << *fd << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try {
		std::list<int> lst;

		for (int i = 1; i <= 10; i++) {
			lst.push_back(i);
		}
		std::list<int>::iterator fd = easyfind(lst, 5);
		std::cout << "Value found in list:\t" << *fd << std::endl;
		fd = easyfind(lst, 124);
		std::cout << "Value found in list:\t" << *fd << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try {
		std::deque<int> deq;

		for (int i = 1; i <= 10; i++) {
			deq.push_back(i);
		}
		std::deque<int>::iterator fd = easyfind(deq, 8);
		std::cout << "Value found in deque:\t" << *fd << std::endl;
		fd = easyfind(deq, 124);
		std::cout << "Value found in deque:\t" << *fd << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
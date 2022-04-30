#pragma	once
#ifndef __EASYFIND_H__

#include <algorithm>
#include <exception>
#include <iostream>
#include <iterator>

struct NoOccurenceFound : public std::exception {
	const char*	what( void ) const throw()
	{
		return ("NoOccurenceFound exception");
	}
};

template <typename T>
typename T::iterator	easyfind(T &container, int search )
{
		typename T::iterator res = std::find(container.begin(), container.end(), search);
		if (res == container.end())
			throw NoOccurenceFound();
		return (res);
}

#endif
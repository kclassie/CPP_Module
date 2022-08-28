#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>

template < typename T >
int easyfind( T container, int num ) {
	typename T::iterator i = container.begin();
	i = std::find(container.begin(), container.end(), num);
	if (i == container.end())
		throw std::runtime_error("\033[31mError: element wasn't found\033[0m");
	std::cout << "\033[32mElement was found!\033[0m" << std::endl;
	return *i;
}

#endif
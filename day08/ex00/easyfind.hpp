#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <iterator>
#include <exception>

class NotFoundException: public std::exception
{
public:
	virtual const char *what() const throw()
	{
		return ("Element not found");
	}
};

template <typename T>
void	easyfind(T & container, int x)
{
	typename T::iterator res;

	res = find(container.begin(), container.end(), x);

	if (res == container.end())
		throw NotFoundException();
	else
		std::cout << x << " found at position "
			<< distance(container.begin(), res) << std::endl;
}

#endif

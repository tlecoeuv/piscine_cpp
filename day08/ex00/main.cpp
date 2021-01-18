
#include "easyfind.hpp"
#include <vector>

int		main()
{
	std::vector<int>		test1(10);
	int				i = 0;

	for (std::vector<int>::iterator it = test1.begin(); it != test1.end(); it++)
	{
		*it = i;
		i++;
	}
	try
	{
		easyfind(test1, 5);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		easyfind(test1, 15);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

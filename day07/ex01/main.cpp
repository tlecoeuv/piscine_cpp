
#include <string>
#include "iter.hpp"

int		main()
{
	int		test1[4] = {1, 2, 3, 4};
	iter(test1, 4, print);
	std::cout << std::endl;

	std::string	test2[5] = {"il", "etait", "une", "fois", "..."};
	iter(test2, 5, print);
	std::cout << std::endl;

	float	test3[4] = {1.0f, 1.5f, 253.2f, 1599.9f};
	iter(test3, 4, print);
	std::cout << std::endl;

	return(0);
}

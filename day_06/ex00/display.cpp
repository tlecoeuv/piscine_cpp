
#include "convert.hpp"

void		displayValues(t_values values)
{
	std::cout << "char: ";
	if (values.flags[0] != "")
		std::cout << values.flags[0] << std::endl;
	else
		std::cout << values.vChar << std::endl;

	std::cout << "int: ";
	if (values.flags[1] != "")
		std::cout << values.flags[1] << std::endl;
	else
		std::cout << values.vInt << std::endl;

	std::cout << "float: ";
	if (values.flags[2] != "")
		std::cout << values.flags[2] << std::endl;
	else
		std::cout << std::setprecision(1) << std::fixed << values.vFloat 
			<< "f" << std::endl;

	std::cout << "double: ";
	if (values.flags[3] != "")
		std::cout << values.flags[3] << std::endl;
	else
		std::cout << std::setprecision(1) << std::fixed
			<< values.vDouble << std::endl;
}

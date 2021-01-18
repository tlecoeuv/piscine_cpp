
#include "convert.hpp"

void	convert(std::string str, t_values & values)
{
	if (isChar(str))
		convertChar(str, values);
	else if (isInt(str))
		convertInt(str, values);
	else if (isFloat(str) || str == "+inff" || str == "-inff" || str == "nanf")
		convertFloat(str, values);
	else if (isDouble(str) || str == "+inf" || str == "-inf" || str == "nan")
		convertDouble(str, values);
	else
		for (int i = 0; i < 4; i++)
			values.flags[i] = "impossible";
	setFlags(str, values);
}

void	convertChar(std::string str, t_values & values)
{
	values.vChar = str[0];
	values.vInt = static_cast<int>(values.vChar);
	values.vFloat = static_cast<float>(values.vChar);
	values.vDouble = static_cast<double>(values.vChar);
}

void	convertInt(std::string str, t_values & values)
{
	long int tmp = std::stol(str);

	if (tmp > std::numeric_limits<int>::max()
			|| tmp < std::numeric_limits<int>::min())
	{
		for (int i = 0; i < 4; i++)
			values.flags[i] = "impossible";
		return ;
	}
	values.vInt = std::stoi(str);
	values.vChar = static_cast<char>(values.vInt);
	values.vFloat = static_cast<float>(values.vInt);
	values.vDouble = static_cast<double>(values.vInt);
}

void	convertFloat(std::string str, t_values & values)
{
	values.vFloat = std::stof(str);
	values.vChar = static_cast<char>(values.vFloat);
	values.vInt = static_cast<int>(values.vFloat);
	values.vDouble = static_cast<double>(values.vFloat);
}

void	convertDouble(std::string str, t_values & values)
{
	values.vDouble = std::stod(str);
	values.vChar = static_cast<char>(values.vDouble);
	values.vFloat = static_cast<float>(values.vDouble);
	values.vInt = static_cast<int>(values.vDouble);
}

void	setFlags(std::string str, t_values & values)
{
	if ((values.vInt >= 0 && values.vInt < 32) || values.vInt == 127)
		values.flags[0] = "non displayable";
	else if (values.vInt < 0 || values.vInt > 127)
		values.flags[0] = "impossible";
	if (values.vDouble > std::numeric_limits<int>::max()
		|| values.vDouble < std::numeric_limits<int>::min()
		|| str == "nan" || str == "nanf")
	{
		values.flags[0] = "impossible";
		values.flags[1] = "impossible";
	}
}

/*
std::cout << "char: " << vChar << std::endl;
std::cout << "int: " << vInt << std::endl;
std::cout << "float: " << vFloat << std::endl;
std::cout << "double: " << vDouble << std::endl;
*/

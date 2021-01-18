
#include "convert.hpp"

bool	isChar(std::string str)
{
	if (str.length() != 1 || std::isdigit(str[0]))
		return (0);
	return (1);
}

bool	isInt(std::string str)
{
	size_t i;

	i = 0;
	if (str[0] == '+' || str[0] == '-')
		i = 1;
	for ( ; i < str.length(); i++)
		if (!std::isdigit(str[i]))
			return (0);
	return (1);
}

bool	isFloat(std::string str)
{
	size_t	i;
	int	dot;

	i = 0;
	dot = 0;
	if (str[0] == '+' || str[0] == '-')
		i = 1;
	if (str[str.length() - 1] != 'f')
		return (0);
	for ( ; i < str.length() - 1; i++)
	{
		if (!std::isdigit(str[i]))
		{
			if (str[i] == '.')
				dot++;
			else
				return (0);
		}
	}
	if (dot != 1)
		return (0);
	return (1);
}

bool	isDouble(std::string str)
{
	size_t	i;
	int	dot;

	i = 0;
	dot = 0;
	if (str[0] == '+' || str[0] == '-')
		i = 1;
	for ( ; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
		{
			if (str[i] == '.')
				dot++;
			else
				return (0);
		}
	}
	if (dot != 1)
		return (0);
	return (1);
}

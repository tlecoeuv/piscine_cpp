#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <cmath>

typedef struct	s_values
{
	char			vChar;
	int				vInt;
	float			vFloat;
	double			vDouble;
	std::string		flags[4];
}				t_values;

// utils:
bool	isChar(std::string str);
bool	isInt(std::string str);
bool	isFloat(std::string str);
bool	isDouble(std::string str);

// convert:
void	convert(std::string str, t_values & values);
void	convertChar(std::string str, t_values & values);
void	convertInt(std::string str, t_values & values);
void	convertFloat(std::string str, t_values & values);
void	convertDouble(std::string str, t_values & values);
void	setFlags(std::string str, t_values & values);

void		displayValues(t_values values);




#endif

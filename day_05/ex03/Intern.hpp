#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern(void);
	Intern(Intern const & src);
	~Intern(void);

	Intern & operator=(Intern const & rhs);

	Form	*makeForm(std::string type, std::string target);

private:

};

struct FormType
{
	std::string type;
	Form *(*fct)(std::string);
};

#endif


#include "Intern.hpp"

//CANONICAL FUNCS

Intern::Intern()
{
}

Intern::Intern(Intern const & src)
{
	(void)src;
}

Intern &	Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return *this;
}

Intern::~Intern()
{
}

Form	*scf(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*rrf(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form	*ppf(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(std::string type, std::string target)
{
	static struct FormType types[3] =
	{
		{ "shrubbery creation", scf },
		{ "robotomy request", rrf },
		{ "presidential pardon", ppf }
	};

	for (int i = 0; i < 3; i++)
	{
		if (types[i].type == type)
		{
			std::cout << "Intern creates " << type << std::endl;
			return types[i].fct(target);
		}
	}

	std::cout << "Unknown form type: " << type << std::endl;
	return NULL;
}

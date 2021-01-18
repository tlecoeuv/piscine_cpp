#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"


class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	virtual ~ShrubberyCreationForm(void);

	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

	virtual void		execute(Bureaucrat const &executor) const;

private:
	std::string const		_target;
};

#endif

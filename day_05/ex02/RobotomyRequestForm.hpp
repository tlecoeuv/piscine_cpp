#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"


class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	virtual ~RobotomyRequestForm(void);

	RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

	virtual void		execute(Bureaucrat const &executor) const;

private:
	std::string const		_target;
};

#endif

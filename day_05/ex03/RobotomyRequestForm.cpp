
#include "RobotomyRequestForm.hpp"

//CANONICAL FUNCS

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
		Form("Robotomy Request", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) :
		Form(src.getName(), src.getSignGrade(), src.getExecuteGrade())
{
	*this = src;
	return;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	if (this != &rhs)
		Form::operator=(rhs);
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	srand(time(NULL));
	Form::execute(executor);
	std::cout << "* prrrrr ... *" << std::endl;
	if (rand() % 3 == 2)
		std::cout << _target << " has been robotomized." << std::endl;
	else
		std::cout << "Robotomization on " << _target << " failed." << std::endl;
}

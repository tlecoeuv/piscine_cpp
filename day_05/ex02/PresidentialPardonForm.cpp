
#include "PresidentialPardonForm.hpp"

//CANONICAL FUNCS

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
		Form("Presidential Pardon", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) :
		Form(src.getName(), src.getSignGrade(), src.getExecuteGrade())
{
	*this = src;
	return;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	if (this != &rhs)
		Form::operator=(rhs);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << _target << " has been forgiven by Zafod Beeblebrox."
			<< std::endl;
}

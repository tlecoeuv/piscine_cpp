
#include "Form.hpp"

//CANONICAL FUNCS

Form::Form() : _name("no name"), _signGrade(1), _executeGrade(1)
{
}

Form::Form(std::string name, int signGrade, int executeGrade) :
		_name(name), _signed(false),
		_signGrade(signGrade), _executeGrade(executeGrade)
{
	if (signGrade < 1 || executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & src) :
		_name(src._name), _signed(src._signed),
		_signGrade(src._signGrade), _executeGrade(src._executeGrade)
{
	if (src._signGrade < 1 || src._executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (src._signGrade > 150 || src._executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

Form &	Form::operator=(Form const & rhs)
{
	if (this != &rhs)
		_signed = rhs._signed;
	return *this;
}

std::string		Form::getName() const
{
	return (_name);
}

bool			Form::isSigned() const
{
	return (_signed);
}

int				Form::getExecuteGrade() const
{
	return _executeGrade;
}

int				Form::getSignGrade() const
{
	return _signGrade;
}

void			Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() <= _signGrade)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream &		operator<<(std::ostream &o, const Form &rhs)
{
	std::string sign;

	if (rhs.isSigned())
		sign = "signed";
	else
		sign = "unsigned";

	o << "Form " << rhs.getName() << ", " << sign
		<< " [grade required to sign: " << rhs.getSignGrade()
		<< "] [grade required to execute: " << rhs.getExecuteGrade()
		<< "]" << std::endl;

	return (o);
}

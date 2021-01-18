#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
public:
	Form(std::string name, int signGrade, int executeGrade);
	Form(Form const & src);
	~Form(void);

	Form & operator=(Form const & rhs);

	std::string			getName() const;
	bool				isSigned() const;
	int					getExecuteGrade() const;
	int					getSignGrade() const;
	void				beSigned(Bureaucrat const & bureaucrat);
	virtual void		execute(Bureaucrat const &executor) const;

	class GradeTooHighException: public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return ("Grade too high");
		};
	};
	class GradeTooLowException: public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return("Grade too low");
		};
	};
	class FormUnsignedException: public std::exception
	{
		public:
		virtual const char *what() const throw()
		{
			return("Form unsigned");
		};
	};

private:
	Form(void);

	std::string	const	_name;
	bool				_signed;
	int	const			_signGrade;
	int	const			_executeGrade;
};

std::ostream &		operator<<(std::ostream &o, const Form &rhs);

#endif

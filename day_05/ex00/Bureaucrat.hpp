#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat(void);

	Bureaucrat 			&operator=(Bureaucrat const & rhs);

	std::string const	getName() const;
	int					getGrade() const;
	void				incrementGrade();
	void				decrementGrade();

	class GradeTooHighException: public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("Grade too High");
		};
	};

	class GradeTooLowException: public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("Grade too Low");
		};
	};

private:
	Bureaucrat(void);

	std::string	const	_name;
	int					_grade;

};

std::ostream &		operator<<(std::ostream &o, const Bureaucrat &rhs);

#endif

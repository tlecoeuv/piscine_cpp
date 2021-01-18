
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int		main()
{
	Bureaucrat	boss("The boss", 1);
	Bureaucrat	newGuy("New guy", 149);
	Intern		intern;
	Form*		ptForm;

	ptForm = intern.makeForm("shrubbery creation", "targeto");
	boss.signForm(*ptForm);
	boss.executeForm(*ptForm);
	delete ptForm;
	ptForm = intern.makeForm("inexistant", "targeto");
}

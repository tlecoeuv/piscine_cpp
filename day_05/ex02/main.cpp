
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int		main()
{
	Bureaucrat	boss("The boss", 1);
	Bureaucrat	newGuy("New guy", 149);

	ShrubberyCreationForm	shrub("TestShrub");
	PresidentialPardonForm	presPardon("TestPres");
	RobotomyRequestForm		Robotomy("TestRobot");
	try
	{
		boss.signForm(shrub);
		boss.signForm(presPardon);
		boss.signForm(Robotomy);
		boss.executeForm(shrub);
		boss.executeForm(presPardon);
		boss.executeForm(Robotomy);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

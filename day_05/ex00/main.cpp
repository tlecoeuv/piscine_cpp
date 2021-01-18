
#include "Bureaucrat.hpp"


int		main()
{
	Bureaucrat	boss("The boss", 2);
	Bureaucrat	newGuy("New guy", 149);

	std::cout << "test incrementation:" << std::endl;
	try
	{
		std::cout << boss;
		boss.incrementGrade();
		std::cout << boss;
		boss.incrementGrade();
		std::cout << "YOOO" << std::endl;

	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "test decrementation:" << std::endl;
	try
	{
		std::cout << newGuy;
		newGuy.decrementGrade();
		std::cout << newGuy;
		newGuy.decrementGrade();
		std::cout << "YOOO" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "test déclaration too high:" << std::endl;
	try
	{
		Bureaucrat tooHigh("too High Guy", 0);
		std::cout << "YOOO" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

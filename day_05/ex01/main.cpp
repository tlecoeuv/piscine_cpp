
#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main()
{
	Bureaucrat	boss("The boss", 2);
	Bureaucrat	newGuy("New guy", 149);

	Form		testForm1("test form 1", 50, 50);
	Form		testForm2("test form 2", 1, 150);

	std::cout << boss << newGuy << testForm1 << testForm2;
	std::cout << "\n---------------------------\n" << std::endl;

	std::cout << "newGuy try to sign form 1" << std::endl;
	try
	{
		newGuy.signForm(testForm1);
		std::cout << testForm1;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n---------------------------\n" << std::endl;
	std::cout << "boss sign form 1:" << std::endl;
	boss.signForm(testForm1);
	std::cout << testForm1;
	std::cout << "\n---------------------------\n" << std::endl;

	std::cout << "different test on form declaration:" << std::endl;

	try
	{
		Form c("C", 0, 50);
		std::cout << c;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form c("C", 151, 50);
		std::cout << c;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}try
	{
		Form c("C", 50, 151);
		std::cout << c;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

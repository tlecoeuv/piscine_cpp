#include "repertory.hpp"

int main()
{
	Repertory		rep;
	std::string		command;

	std::cout << "Welcome on this phonebook!" << std::endl;
 	std::cout << "Available commands are : ADD, SEARCH, EXIT." << std::endl;

	while (command.compare("EXIT") != 0)
	{
		std::cout << "enter a valid command: ";
		std::getline(std::cin, command);
		if (command.compare("ADD") == 0)
			rep.add_contact();
		else if (command.compare("SEARCH") == 0)
			rep.search();
		else if (command.compare("EXIT") != 0)
			std::cout << "command not valid." << std::endl;
	}
	return (0);
}

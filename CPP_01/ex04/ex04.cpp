
#include <string>
#include <iostream>

int		main(void)
{
	std::string		str("HI THIS IS THE BRAIN");
	std::string*	strPtr = &str;
	std::string&	strRef = str;

	std::cout << "affiche pointeur: " << *strPtr << std::endl;
	std::cout << "affiche référence: " << strRef << std::endl;
}

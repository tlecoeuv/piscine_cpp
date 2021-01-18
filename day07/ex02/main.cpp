
#include <string>
#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int>		a(10);
	Array<int>		b;

	std::cout << "initialization with default value:" << std::endl;
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << "\n" << std::endl;

	std::cout << "use oparator[] to assign values:" <<std::endl;
	for (unsigned int i = 0; i < a.size(); i++)
		a[i] = i + 10;
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << "\n" << std::endl;

	std::cout << "test of operator= :" << std::endl;
	b = a;
	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";
	std::cout << "\n" << std::endl;

	std::cout << "test of constructor by copy:" << std::endl;
	Array<int>		c(a);
	for (unsigned int i = 0; i < c.size(); i++)
		std::cout << c[i] << " ";
	std::cout << "\n" << std::endl;

	std::cout << "test that modifiying one of the two arrays don't affect the other:" << std::endl;
	for (unsigned int i = 0; i < c.size(); i++)
		c[c.size() - i - 1] = a[i];
	for (unsigned int i = 0; i < c.size(); i++)
		std::cout << c[i] << " ";
	std::cout  << std::endl;
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << "\n" << std::endl;

	std::cout << "test out of limits exception:" << std::endl;
	try
	{
		a[15] = 160;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n" << std::endl;


	std::cout << "some test with strings to show it can take any types:" << std::endl;
	Array<std::string>	s(5);
	s[0] = "Il";
	s[1] = "etait";
	s[2] = "une";
	s[3] = "fois";
	s[4] = "...";

	for (unsigned int i = 0; i < s.size(); i++)
		std::cout << s[i] << " ";
	std::cout << std::endl;
	s[2] = "deux";
	for (unsigned int i = 0; i < s.size(); i++)
		std::cout << s[i] << " ";
	std::cout << std::endl;
}

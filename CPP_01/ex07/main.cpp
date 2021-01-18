
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int		main(int argc, char **argv)
{
	//test arguments:
	if (argc < 4)
	{
		std::cout << "wrong number of arguments." << std::endl;
		std::cout << "synthax is: './replace file s1 s2'" << std::endl;
		return 1;
	}

	std::string file = argv[1];
	std::string s1 = argv[2];
	std::string	s2 = argv[3];

	if (s1.empty() || s2.empty())
	{
		std::cout << "You can't use empty strings." << std::endl;
		return (1);
	}

	//open files:
	std::ifstream	srcStream(file);
	std::ofstream	destStream(file + ".replace");
	if (!srcStream.good() || !destStream.good())
	{
		std::cout << "Can't open one of the file." << std::endl;
		return (1);
	}

	//modify and put into new file line by line:
	std::string				line;
	while (std::getline(srcStream, line))
	{
		std::string::size_type	pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.replace(pos, s1.length(), s2);
			std::cout << pos << std::endl;
			pos += s2.size();
		}
		destStream << line << std::endl;
	}

	destStream.close();
	srcStream.close();
	return(0);
}

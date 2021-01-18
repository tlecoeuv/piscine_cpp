
#include "Logger.hpp"
#include <iostream>
#include <sstream>
#include <fstream>
#include <ctime>
#include <iomanip>

Logger::Logger(std::string filename) : _filename(filename)
{

}

void			Logger::log(std::string const &dest, std::string const &message)
{
	std::string		log;
	log = this->makeLogEntry(message);

	std::string names[2] = {"file", "console"};
	void (Logger::*array[2])(std::string);
	array[0] = &Logger::logToFile;
	array[1] = &Logger::logToConsole;

	for (int i = 0; i < 2; i++)
		if (names[i].compare(dest) == 0)
			(this->*array[i])(log);
}

std::string		Logger::makeLogEntry(std::string const message) const
{
	std::string			log;
	std::stringstream	ss;

	time_t	t = time(NULL);
	tm*		timePtr = localtime(&t);

	ss << "["
			<< timePtr->tm_year + 1900
			<< std::setw(2) << std::right << std::setfill('0')
			<< timePtr->tm_mon + 1
			<< std::setw(2) << std::right << std::setfill('0')
			<< timePtr->tm_mday
			<< "_"
			<< std::setw(2) << std::right << std::setfill('0')
			<< timePtr->tm_hour
			<< std::setw(2) << std::right << std::setfill('0')
			<< timePtr->tm_min
			<< std::setw(2) << std::right << std::setfill('0')
			<< timePtr->tm_sec
			<< "] ";

	log = ss.str() + message;
	return (log);
}

void 	Logger::logToConsole(std::string log)
{
	std::cout << log << std::endl;
}

void	Logger::logToFile(std::string log)
{
	std::ofstream	file(this->_filename);

	file << log << std::endl;
}

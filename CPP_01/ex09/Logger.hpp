#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <string>

class	Logger
{
	public:
		Logger(std::string filename);

		void	log(std::string const &dest, std::string const &message);

	private:
		std::string	_filename;

		void		logToConsole(std::string log);
		void		logToFile(std::string log);
		std::string	makeLogEntry(std::string message) const;
};

#endif

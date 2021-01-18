#ifndef PONY_HPP
# define  PONY_HPP

#include <string>
#include <iostream>

class		Pony
{
	public:
		Pony(std::string name, int age);
		~Pony();
		void	print_info( void ) const;

	private:
		std::string		_name;
		int				_age;
};

#endif

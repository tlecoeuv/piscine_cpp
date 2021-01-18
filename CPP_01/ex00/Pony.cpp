#include "Pony.hpp"

Pony::Pony(std::string name, int age) : _name(name), _age(age)
{
	std::cout << name << "created!" << std::endl;
}

Pony::~Pony()
{
	std::cout << "RIP " << this->_name << std::endl;
}

void	Pony::print_info( void ) const
{
	std::cout << "This pony name is " << this->_name
			<< ", he is " << _age << " years old."
			<< std::endl;
}

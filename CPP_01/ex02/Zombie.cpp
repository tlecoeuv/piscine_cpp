#include "Zombie.hpp"


Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	this->announce();
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " doesn't exist anymore!" << std::endl;
}

void	Zombie::advert(void) const
{
	std::cout << "<" << this->_name << "(" << this->_type << ")> "
			<< "Braiiiiiiinnnssss ..." << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << " is there!" << std::endl;
}

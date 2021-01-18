#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	this->announce();
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " doesn't exist anymore!" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::setType(std::string type)
{
	this->_type = type;
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

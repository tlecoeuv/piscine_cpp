#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon(void)
{
}

std::string	const & Weapon::getType() const
{
	return (this->_type);
}

void				Weapon::setType(std::string type)
{
	this->_type = type;
}

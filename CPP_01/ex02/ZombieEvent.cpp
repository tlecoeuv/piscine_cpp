#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) : _type("classic")
{
}

ZombieEvent::~ZombieEvent(void)
{
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name) const
{
	Zombie*	z = new Zombie(name, this->_type);
	return (z);
}

void	ZombieEvent::randomChump(void) const
{
	Zombie chump = Zombie(ZombieEvent::_names[std::rand() % 6],this->_type);
	chump.advert();
}

std::string	ZombieEvent::_names[6] = {
	"Joe",
	"Patrick",
	"Bob",
	"Sarah",
	"Franck",
	"Bobi"
};

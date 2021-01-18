
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _sizeHorde(n)
{
	this->_Horde = new Zombie[n];

	for (int i = 0; i < n; i++)
	{
		this->_Horde[i].setType("Classic");
		this->_Horde[i].setName(ZombieHorde::_names[std::rand() % 6]);
	}
}

ZombieHorde::~ZombieHorde(void)
{
	std::cout << "the Horde class destructor start now." << std::endl;
	delete [] this->_Horde;
}

void		ZombieHorde::announce(void) const
{
	for (int i = 0; i < this->_sizeHorde; i++)
		this->_Horde[i].advert();
}

std::string		ZombieHorde::_names[6] = {
	"Joe",
	"Patrick",
	"Bob",
	"Sarah",
	"Franck",
	"Bobi"
};

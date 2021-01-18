#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int		main(void)
{
	ZombieEvent zEvent;

	Zombie	*Jack = zEvent.newZombie("Jack");
	zEvent.setZombieType("Tank");
	Zombie	*JackBodyguard = zEvent.newZombie("Jack's Bodyguard");

	std::cout << "\n" << "time for chumps:" << std::endl;
	zEvent.setZombieType("Chump");
	for (int i = 0; i < 10; i++)
		zEvent.randomChump();
	std::cout << "no more chumps.\n" << std::endl;

	std::cout << "let's kill jack now:" << std::endl;
	JackBodyguard->advert();
	Jack->advert();
	delete JackBodyguard;
	delete Jack;
	std::cout << "everything is clean, we can leave the program." << std::endl;
}

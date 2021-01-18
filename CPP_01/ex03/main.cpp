
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int		main(void)
{
	ZombieHorde		smallHorde = ZombieHorde(20);

	std::cout << "Oh shit there is and Horde!\n" << std::endl;
	smallHorde.announce();

	std::cout << "\nRun! if we leave the program they will be killed by the "
				<< "Horde class's Destructor, we will be safe!\n"
				<< std::endl;
}

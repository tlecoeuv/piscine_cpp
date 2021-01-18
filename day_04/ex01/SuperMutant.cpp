#include "SuperMutant.hpp"
#include <iostream>
#include <string>


/*
** CANONICAL FUNCS
*/
SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout <<  "Gaaah. Break everything !" << std::endl;
	return;
}

SuperMutant::SuperMutant(SuperMutant const & src) : Enemy(src)
{
	std::cout <<  "Gaaah. Break everything !" << std::endl;
	return;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
	return;
}

void		SuperMutant::takeDamage(int damage)
{
	damage = damage - 3;
	Enemy::takeDamage(damage);
}

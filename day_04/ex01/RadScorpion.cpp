
#include "RadScorpion.hpp"


//CANONICAL FUNCS

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout <<  "* click click click *" << std::endl;
	return;
}

RadScorpion::RadScorpion(RadScorpion const & src) : Enemy(src)
{
	std::cout <<  "* click click click *" << std::endl;
	return;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
	return;
}

//MEMBER FUNCS

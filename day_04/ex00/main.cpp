
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Victim*		test = new Peon("disguise peon");


	std::cout << robert << jim << joe << *test;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(*test);

	return 0;
}

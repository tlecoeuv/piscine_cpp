
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "CorrectionVictim.hpp"

int main()
{
	std::cout << "Constructors printing:\n" << std::endl;
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Victim*		test = new Peon("Pointer peon");
	Victim*		stud = new CorrectionVictim("Pointer student");

	std::cout << "\npresentation:\n" << std::endl;
	std::cout << robert << jim << joe << *test << *stud << std::endl;

	std::cout << "\npolymorph:\n" << std::endl;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(*test);
	robert.polymorph(*stud);

	std::cout << "\nDestructors:\n" << std::endl;
	delete test;
	delete stud;
	return 0;
}

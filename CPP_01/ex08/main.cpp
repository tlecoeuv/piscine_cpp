
#include "Human.hpp"

int		main(void)
{
	Human			test;
	std::string		target = "Innocent";
	std::string		punch = "meleeAttack";
	std::string		range = "rangedAttack";
	std::string		shout = "intimidatingShout";
	std::string		talk = "talking";


	test.action(punch, target);
	test.action(range, target);
	test.action(shout, target);
	test.action(talk, target);
}

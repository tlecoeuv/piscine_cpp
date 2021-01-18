
#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	robot("Test robot");

	robot.rangedAttack("Test victim");
	robot.meleeAttack("Test victim");
	robot.takeDamage(40);
	robot.beRepaired(30);
	robot.takeDamage(20);
	robot.rangedAttack("scientist");
	std::cout << "Oh shit the test robot is out of control!" << std::endl;
	std::cout << "EMERGENCY PROTOCOL" << std::endl;
	robot.takeDamage(1000);
}

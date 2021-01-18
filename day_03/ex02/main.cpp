
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	FragTrap	fragRobot("Fragito");
	ScavTrap	scavRobot("Scavito");

	fragRobot.rangedAttack("Test victim");
	scavRobot.rangedAttack("Test victim");
	fragRobot.meleeAttack("Test victim");
	scavRobot.meleeAttack("Test victim");
	fragRobot.takeDamage(40);
	scavRobot.takeDamage(40);
	fragRobot.vaulthunter_dot_exe("Test victim");
	scavRobot.challengeNewcomer("Test victim");
	fragRobot.beRepaired(30);
	scavRobot.beRepaired(30);
	fragRobot.takeDamage(20);
	scavRobot.takeDamage(20);
	fragRobot.rangedAttack("scientist");
	scavRobot.rangedAttack("scientist");
	std::cout << "Oh shit the test robots are out of control!" << std::endl;
	std::cout << "EMERGENCY PROTOCOL" << std::endl;
	fragRobot.takeDamage(1000);
	scavRobot.takeDamage(1000);
}

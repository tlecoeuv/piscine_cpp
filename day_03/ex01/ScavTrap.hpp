#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include <iostream>

class		ScavTrap
{
public:
	ScavTrap(std::string name);
	~ScavTrap();

	ScavTrap &		operator=(ScavTrap const &rhs);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(std::string const & target);

private:
	ScavTrap(ScavTrap const &src);
	ScavTrap();

	void	displayState();
	std::string	_name;
	int			_hitPoints;
	int			_maxHitPoints;
	int			_energyPoints;
	int			_maxEnergyPoints;
	int			_level;
	int			_meleeAttackDamage;
	int			_rangedAttackDamage;
	int			_armorDamageReduction;
};

#endif

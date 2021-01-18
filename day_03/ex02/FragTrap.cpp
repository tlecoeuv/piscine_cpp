
#include "FragTrap.hpp"

// ************************************************************************** //
//                         Constructors & Destructors:                        //
// ************************************************************************** //

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Fragtrap " << name << " created!" << std::endl;
	this->displayState();
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;

	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "Fragtrap " << this->_name << " destroyed!" << std::endl;
}

// ************************************************************************** //
//                            Member functions:                               //
// ************************************************************************** //

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attack[5] =
	{
		"Gun Wizard",
		"Torgue Fiesta",
		"Laser Inferno",
		"Meat Unicycle",
		"Shhh... Trap"
	};
	if (this->_energyPoints < 25)
		std::cout << this->_name << "doesn't have enough energy!" << std::endl;
	else
	{
		std::cout << this->_name << " calls VaultHunter.exe and use "
		<< attack[rand() % 5] << " on " << target << std::endl;
		this->_energyPoints -= 25;
	}
}

// ************************************************************************** //
//                                Operators:                                  //
// ************************************************************************** //

FragTrap &		FragTrap::operator=(FragTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_hitPoints = rhs._hitPoints;
		this->_maxHitPoints = rhs._maxHitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_maxEnergyPoints = rhs._maxEnergyPoints;
		this->_level = rhs._level;
		this->_name = rhs._name;
		this->_meleeAttackDamage = rhs._meleeAttackDamage;
		this->_rangedAttackDamage = rhs._rangedAttackDamage;
		this->_armorDamageReduction = rhs._armorDamageReduction;
	}
	return *this;
}

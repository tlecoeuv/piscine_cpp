
#include "ScavTrap.hpp"

// ************************************************************************** //
//                         Constructors & Destructors:                        //
// ************************************************************************** //

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(std::string name) :
		ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "ScavTrap " << name << " created!" << std::endl;
	this->displayState();
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;

	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " destroyed!" << std::endl;
}

// ************************************************************************** //
//                            Member functions:                               //
// ************************************************************************** //

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "Scavtrap " << this->_name << " attacks "
			<< target << " at range, causing "
			<< _rangedAttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "Scavtrap " << this->_name << " attacks "
			<< target << " at melee, causing "
			<< _meleeAttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string challenge[5] =
	{
		"Pull the Pin",
		"Badass Bingo",
		"Hit-and-Fun",
		"...I Got to Boogie",
		"Compl33tionist"
	};
	std::cout << this->_name << ": " << target
			<< " please complete the challenge " << challenge[rand() % 5]
			<< std::endl;
}

// ************************************************************************** //
//                                Operators:                                  //
// ************************************************************************** //

ScavTrap &		ScavTrap::operator=(ScavTrap const &rhs)
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

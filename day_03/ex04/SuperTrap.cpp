
#include "SuperTrap.hpp"

// ************************************************************************** //
//                         Constructors & Destructors:                        //
// ************************************************************************** //

SuperTrap::SuperTrap()
{
}

SuperTrap::SuperTrap(std::string name) :
		ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5),
		FragTrap(name), NinjaTrap(name)
{
	std::cout << "SuperTrap " << name << " created!" << std::endl;
	this->displayState();
}

SuperTrap::SuperTrap(SuperTrap const &src)
{
	*this = src;

	return ;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap " << this->_name << " destroyed!" << std::endl;
}

// ************************************************************************** //
//                            Member functions:                               //
// ************************************************************************** //

void	SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}


// ************************************************************************** //
//                                Operators:                                  //
// ************************************************************************** //

SuperTrap &		SuperTrap::operator=(SuperTrap const &rhs)
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

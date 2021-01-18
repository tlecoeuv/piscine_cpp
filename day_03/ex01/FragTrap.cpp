
#include "FragTrap.hpp"

// ************************************************************************** //
//                         Constructors & Destructors:                        //
// ************************************************************************** //

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std::string name) : _name(name), _hitPoints(100),
	_maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
	_level(1), _meleeAttackDamage(30), _rangedAttackDamage(20),
	_armorDamageReduction(5)
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

void	FragTrap::displayState()
{
	std::cout << this->_name << ": "
	<< "HP:[" << this->_hitPoints << "/" << this->_maxHitPoints << "] "
	<< "Energy:[" << this->_energyPoints << "/" << this->_maxEnergyPoints << "]"
	<< std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "Fragtrap " << this->_name << " attacks "
			<< target << " at range, causing "
			<< _rangedAttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "Fragtrap " << this->_name << " attacks "
			<< target << " at melee, causing "
			<< _meleeAttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	int realDamage(amount - this->_armorDamageReduction);


	this->_hitPoints -= realDamage;
	std::cout << this->_name << " take " << realDamage << " damages!"
	<< std::endl;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	this->displayState();
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	this->_energyPoints = this->_maxEnergyPoints;
	std::cout << this->_name << " is being repaired." << std::endl;
	this->displayState();
}

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

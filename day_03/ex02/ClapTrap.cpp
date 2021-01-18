
#include "ClapTrap.hpp"

// ************************************************************************** //
//                         Constructors & Destructors:                        //
// ************************************************************************** //

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(100),
	_maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
	_level(1), _meleeAttackDamage(30), _rangedAttackDamage(20),
	_armorDamageReduction(5)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;

	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap  default destructor called" << std::endl;
}

// ************************************************************************** //
//                            Member functions:                               //
// ************************************************************************** //

void	ClapTrap::displayState()
{
	std::cout << this->_name << ": "
	<< "HP:[" << this->_hitPoints << "/" << this->_maxHitPoints << "] "
	<< "Energy:[" << this->_energyPoints << "/" << this->_maxEnergyPoints << "]"
	<< std::endl;
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << this->_name << " attacks "
			<< target << " at range, causing "
			<< _rangedAttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << this->_name << " attacks "
			<< target << " at melee, causing "
			<< _meleeAttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int realDamage(amount - this->_armorDamageReduction);


	this->_hitPoints -= realDamage;
	std::cout << this->_name << " take " << realDamage << " damages!"
	<< std::endl;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	this->displayState();
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	this->_energyPoints = this->_maxEnergyPoints;
	std::cout << this->_name << " is being repaired." << std::endl;
	this->displayState();
}

// ************************************************************************** //
//                                Operators:                                  //
// ************************************************************************** //

ClapTrap &		ClapTrap::operator=(ClapTrap const &rhs)
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

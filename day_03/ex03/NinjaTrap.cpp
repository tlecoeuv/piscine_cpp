
#include "NinjaTrap.hpp"

// ************************************************************************** //
//                         Constructors & Destructors:                        //
// ************************************************************************** //

NinjaTrap::NinjaTrap()
{
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;

	std::cout << "NinjaTrap " << name << " created!" << std::endl;
	this->displayState();
}

NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
	*this = src;

	return ;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap " << this->_name << " destroyed!" << std::endl;
}

// ************************************************************************** //
//                            Member functions:                               //
// ************************************************************************** //

void		NinjaTrap::ninjaShoebox(ClapTrap &clap)
{
	std::cout << this->_name << " attack " << clap.getName()
			<< " on a special clapTrap weakness" << std::endl;
	clap.takeDamage(50);
}

void		NinjaTrap::ninjaShoebox(FragTrap &frag)
{
	std::cout << this->_name << " attack " << frag.getName()
			<< " on a special fragTrap weakness" << std::endl;
	frag.takeDamage(50);
}

void		NinjaTrap::ninjaShoebox(ScavTrap &scav)
{
	std::cout << this->_name << " attack " << scav.getName()
			<< " on a special scavTrap weakness" << std::endl;
	scav.takeDamage(50);
}

void		NinjaTrap::ninjaShoebox(NinjaTrap &ninja)
{
	if (this == &ninja)
		std::cout << "A ninja does not hit himself" << std::endl;
	else
	{
		std::cout << this->_name << " attack " << ninja.getName()
				<< " on a special ninjaTrap weakness" << std::endl;
		ninja.takeDamage(50);
	}
}

// ************************************************************************** //
//                                Operators:                                  //
// ************************************************************************** //

NinjaTrap &		NinjaTrap::operator=(NinjaTrap const &rhs)
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

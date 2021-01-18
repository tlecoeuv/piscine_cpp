#include "Character.hpp"
#include <iostream>
#include <string>


// CANONICAL FUNCS

Character::Character(std::string const & name) : _name(name), _AP(40)
{
}

Character::Character(Character const & src)
{
	*this = src;
	return;
}

Character &	Character::operator=(Character const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_AP = rhs._AP;
		this->_weapon = rhs._weapon;
	}
	return *this;
}

Character::~Character(void)
{
	return;
}

//MEMBER FUNC

std::string		Character::getName() const
{
	return _name;
}

int				Character::getAP() const
{
	return _AP;
}

AWeapon	*		Character::getWeapon() const
{
	if (_weapon)
		return _weapon;
	else
		return NULL;
}

void			Character::recoverAP()
{
	_AP += 10;
	if (_AP > 40)
		_AP = 40;
}

void			Character::equip(AWeapon * weapon)
{
	_weapon = weapon;
}

void			Character::attack(Enemy * enemy)
{
	if (_weapon && enemy && _AP >= _weapon->getAPCost())
	{
		std::cout << _name << " attacks " << enemy->getType() << " with a "
			<< _weapon->getName() << std::endl;
		_weapon->attack();
		enemy->takeDamage(_weapon->getDamage());
		_AP = _AP - _weapon->getAPCost();
		if (enemy->getHP() <= 0)
			delete enemy;
	}
}

std::ostream &		operator<<(std::ostream & o, Character const & rhs)
{
	if (rhs.getWeapon())
	{
		o << rhs.getName() << " has " << rhs.getAP() << "AP and carries a "
			<< rhs.getWeapon()->getName() << std::endl;
	}
	else
	{
		o << rhs.getName() << " has " << rhs.getAP() << "AP and is unarmed"
			<< std::endl;
	}
	return o;
}

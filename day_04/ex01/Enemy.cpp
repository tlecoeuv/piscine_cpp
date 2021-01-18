
#include "Enemy.hpp"

// ************************************************************************** //
//                         Constructors & Destructors:                        //
// ************************************************************************** //

Enemy::Enemy(int hp, std::string const & type) : _HP(hp), _type(type)
{
}

Enemy::Enemy(const Enemy &src)
{
	*this = src;
}

// ************************************************************************** //
//                            Member functions:                               //
// ************************************************************************** //

void		Enemy::takeDamage(int damage)
{
	if (damage >= 0)
	{
		_HP = _HP - damage;
		if (_HP < 0)
			_HP = 0;
	}
}

std::string	Enemy::getType() const
{
	return _type;
}

int			Enemy::getHP() const
{
	return _HP;
}

// ************************************************************************** //
//                                Operators:                                  //
// ************************************************************************** //

Enemy &		Enemy::operator=(Enemy const & rhs)
{
	if (this != &rhs)
	{
		_HP = rhs.getHP();
		_type = rhs.getType();
	}

	return *this;
}

// ************************************************************************** //
//                                Non members:                                //
// ************************************************************************** //

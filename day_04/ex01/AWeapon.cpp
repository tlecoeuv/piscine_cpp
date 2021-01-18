
#include "AWeapon.hpp"

// ************************************************************************** //
//                         Constructors & Destructors:                        //
// ************************************************************************** //

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
						_name(name), _APCost(apcost), _damage(damage)
{
}

AWeapon::AWeapon(AWeapon const & src)
{
	*this = src;
}

AWeapon::~AWeapon()
{
}

// ************************************************************************** //
//                            Member functions:                               //
// ************************************************************************** //

std::string		AWeapon::getName() const
{
	return _name;
}

int				AWeapon::getAPCost() const
{
	return _APCost;
}

int				AWeapon::getDamage() const
{
	return _damage;
}

// ************************************************************************** //
//                                Operators:                                  //
// ************************************************************************** //

AWeapon &		AWeapon::operator=(AWeapon const & rhs)
{
	if (this != &rhs)
	{
		_name = rhs.getName();
		_APCost = rhs.getAPCost();
		_damage = rhs.getDamage();
	}

	return *this;
}

// ************************************************************************** //
//                                Non members:                                //
// ************************************************************************** //

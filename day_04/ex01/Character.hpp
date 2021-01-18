#ifndef CHARACTER_H
# define CHARACTER_H

#include <iostream>
#include <string>
#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character
{
public:

	Character(Character const & src);
	~Character(void);
	Character & operator=(Character const & rhs);
	Character(std::string const & name);

	void			recoverAP();
	void			equip(AWeapon *);
	void			attack(Enemy *);
	std::string		getName() const;
	int				getAP() const;
	AWeapon	*		getWeapon() const;

private:
	Character() {};

	std::string		_name;
	int				_AP;
	AWeapon *		_weapon;
};

std::ostream		&operator<<(std::ostream & o, Character const & rhs);

#endif

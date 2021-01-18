#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <string>

class		AWeapon
{
public:
	AWeapon(std::string const & name, int apcost, int damage);
	virtual ~AWeapon();
	AWeapon &		operator=(AWeapon const &rhs);

	std::string		getName() const;
	int 			getAPCost() const;
	int 			getDamage() const;

	virtual void 	attack() const = 0;

private:
	AWeapon();
	AWeapon(AWeapon const & src);

	std::string		_name;
	int				_APCost;
	int				_damage;
};

#endif

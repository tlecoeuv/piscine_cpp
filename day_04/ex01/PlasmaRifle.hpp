#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class		PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	~PlasmaRifle();

	void 			attack() const;
private:
};

#endif

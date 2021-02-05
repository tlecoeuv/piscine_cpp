#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

#include "Enemy.hpp"
#include <iostream>
#include <string>

class SuperMutant : virtual public Enemy
{
public:
	//CANONICAL FUNCS
	SuperMutant(void);
	SuperMutant(SuperMutant const & src);
	virtual ~SuperMutant(void);

	void	takeDamage(int damage);

private:

};

#endif

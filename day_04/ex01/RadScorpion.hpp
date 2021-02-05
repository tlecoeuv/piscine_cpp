#ifndef RADSCORPION_H
# define RADSCORPION_H

#include "Enemy.hpp"
#include <iostream>
#include <string>

class RadScorpion : virtual public Enemy
{
public:

	//CANONICAL FUNCS
	RadScorpion(void);
	RadScorpion(RadScorpion const & src);
	virtual ~RadScorpion(void);

private:

};

#endif

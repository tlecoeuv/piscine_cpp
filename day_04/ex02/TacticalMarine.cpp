#include "TacticalMarine.hpp"
#include <iostream>
#include <string>

// CANONICAL FUNCS

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & src)
{
	(void)src;
	std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine &	TacticalMarine::operator=(TacticalMarine const & rhs)
{
	(void)rhs;
	return *this;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

//MEMBER FUNCS

ISpaceMarine*	TacticalMarine::clone() const
{
	TacticalMarine *clone = new TacticalMarine(*this);
	return clone;
}

void			TacticalMarine::battleCry() const
{
	std::cout << "For the Holy PLOT !" << std::endl;
}

void			TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

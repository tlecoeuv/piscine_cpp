#include "AssaultTerminator.hpp"
#include <iostream>
#include <string>

// CANONICAL FUNCS

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src)
{
	(void)src;
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator &	AssaultTerminator::operator=(AssaultTerminator const & rhs)
{
	(void)rhs;
	return *this;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back ..." << std::endl;
}

//MEMBER FUNCS

ISpaceMarine*	AssaultTerminator::clone() const
{
	AssaultTerminator *clone = new AssaultTerminator(*this);
	return clone;
}

void			AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. Purify it !" << std::endl;
}

void			AssaultTerminator::rangedAttack() const
{
	std::cout <<  "* does nothing *" << std::endl;
}

void			AssaultTerminator::meleeAttack() const
{
	std::cout << "* attaque with chainfists *" << std::endl;
}

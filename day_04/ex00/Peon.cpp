
#include "Peon.hpp"

// ************************************************************************** //
//                         Constructors & Destructors:                        //
// ************************************************************************** //

Peon::Peon()
{
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & src)
{
	*this = src;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

// ************************************************************************** //
//                            Member functions:                               //
// ************************************************************************** //

void			Peon::getPolymorphed() const
{
	std::cout << _name << " was just polymorphed  into a pink pony!"
			<< std::endl;
}

// ************************************************************************** //
//                                Operators:                                  //
// ************************************************************************** //

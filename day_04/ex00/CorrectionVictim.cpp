
#include "CorrectionVictim.hpp"

// ************************************************************************** //
//                         Constructors & Destructors:                        //
// ************************************************************************** //

CorrectionVictim::CorrectionVictim()
{
}

CorrectionVictim::CorrectionVictim(std::string name) : Victim(name)
{
	std::cout << "Bonjour." << std::endl;
}

CorrectionVictim::CorrectionVictim(CorrectionVictim const & src)
{
	*this = src;
}

CorrectionVictim::~CorrectionVictim()
{
	std::cout << "Damn let's retry this..." << std::endl;
}

// ************************************************************************** //
//                            Member functions:                               //
// ************************************************************************** //

void			CorrectionVictim::getPolymorphed() const
{
	std::cout << _name << " was just polymorphed  into a sad student!"
			<< std::endl;
}

// ************************************************************************** //
//                                Operators:                                  //
// ******

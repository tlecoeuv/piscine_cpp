#include "CorrectionMarine.hpp"
#include <iostream>
#include <string>

// CANONICAL FUNCS

CorrectionMarine::CorrectionMarine(void)
{
	std::cout << "Correction Marine ready for action !" << std::endl;
}

CorrectionMarine::CorrectionMarine(CorrectionMarine const & src)
{
	(void)src;
	std::cout << "Correction Marine ready for action !" << std::endl;
}

CorrectionMarine &	CorrectionMarine::operator=(CorrectionMarine const & rhs)
{
	(void)rhs;
	return *this;
}

CorrectionMarine::~CorrectionMarine(void)
{
	std::cout << "Damn no errors in this project.." << std::endl;
}

//MEMBER FUNCS

ISpaceMarine*	CorrectionMarine::clone() const
{
	CorrectionMarine *clone = new CorrectionMarine(*this);
	return clone;
}

void			CorrectionMarine::battleCry() const
{
	std::cout << "For the Holy Correction!" << std::endl;
}

void			CorrectionMarine::rangedAttack() const
{
	std::cout << "* attacks with a question *" << std::endl;
}

void			CorrectionMarine::meleeAttack() const
{
	std::cout << "* attacks with a tester *" << std::endl;
}

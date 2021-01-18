
#include "Cure.hpp"

//CANONICAL FUNCS

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(Cure const & src) : AMateria("cure")
{
	this->setXP(src.getXP());
	return;
}

Cure &	Cure::operator=(Cure const & rhs)
{
	this->setXP(rhs.getXP());
	return *this;
}

Cure::~Cure()
{
}

//MEMBER FUNCS

AMateria*		Cure::clone() const
{
	Cure*	clone = new Cure(*this);

	return clone;
}

void			Cure::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

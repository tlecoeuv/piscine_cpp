
#include "Ice.hpp"

//CANONICAL FUNCS

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(Ice const & src) : AMateria("ice")
{
	this->setXP(src.getXP());
	return;
}

Ice &	Ice::operator=(Ice const & rhs)
{
	this->setXP(rhs.getXP());
	return *this;
}

Ice::~Ice()
{
}

//MEMBER FUNCS

AMateria*		Ice::clone() const
{
	Ice*	clone = new Ice(*this);

	return clone;
}

void			Ice::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName()
			<< " *" << std::endl;
}

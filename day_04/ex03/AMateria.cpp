
#include "AMateria.hpp"
#include "ICharacter.hpp"

//CANONICAL FUNCS

AMateria::AMateria() : _xp(0)
{
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
	return;
}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{
}

AMateria &	AMateria::operator=(AMateria const & rhs)
{
	if (this != &rhs)
	{
		_xp = rhs._xp;
	}
	return *this;
}

AMateria::~AMateria()
{
}

//MEMBER FUNCS

std::string const &		AMateria::getType() const
{
	return _type;
}

unsigned int			AMateria::getXP() const
{
	return _xp;
}

void					AMateria::setXP(int amount)
{
	_xp = amount;
}

void					AMateria::use(ICharacter& target)
{
	(void) target;
	_xp += 10;
}

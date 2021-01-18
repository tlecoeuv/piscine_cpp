
#include "Victim.hpp"


// ************************************************************************** //
//                         Constructors & Destructors:                        //
// ************************************************************************** //

Victim::Victim()
{
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "A random victim called " << _name << " just appeared!"
				<< std::endl;
}

Victim::Victim(Victim const & src)
{
	*this = src;
}

Victim::~Victim()
{
	std::cout << "The victim " << _name << " died for no apparent reasons!"
				<< std::endl;
}

// ************************************************************************** //
//                            Member functions:                               //
// ************************************************************************** //

std::string		Victim::getName() const
{
	return _name;
}

void			Victim::getPolymorphed() const
{
	std::cout << _name << " was just polymorphed in a cute little sheep!"
			<< std::endl;
}

// ************************************************************************** //
//                                Operators:                                  //
// ************************************************************************** //

std::ostream &	operator<<(std::ostream & o, Victim const & rhs)
{
	o << "I'm " << rhs.getName() << ", and I like otters!" << std::endl;

	return o;
}

Victim &	Victim::operator=(Victim const & rhs)
{
	if (this != &rhs)
		_name = rhs.getName();

	return (*this);
}

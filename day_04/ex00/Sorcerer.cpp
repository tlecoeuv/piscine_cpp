
#include "Sorcerer.hpp"


// ************************************************************************** //
//                         Constructors & Destructors:                        //
// ************************************************************************** //

Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer(std::string name, std::string title) :
		_name(name), _title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
	*this = src;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title
		<< ", is dead. Consequences will never be the same!" << std::endl;
}

// ************************************************************************** //
//                            Member functions:                               //
// ************************************************************************** //

std::string		Sorcerer::getName() const
{
	return _name;
}

std::string		Sorcerer::getTitle() const
{
	return _title;
}

void			Sorcerer::polymorph(Victim const &target) const
{
	target.getPolymorphed();
}

// ************************************************************************** //
//                                Operators:                                  //
// ************************************************************************** //

std::ostream &	operator<<(std::ostream & o, Sorcerer const & rhs)
{
	o << "I am " << rhs.getName() << ", " << rhs.getTitle()
		<< ", and i like ponies!" << std::endl;

	return o;
}

Sorcerer &		Sorcerer::operator=(Sorcerer const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_title = rhs.getTitle();
	}

	return *this;
}

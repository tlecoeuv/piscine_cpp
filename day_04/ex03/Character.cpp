
#include "Character.hpp"

//CANONICAL FUNCS

Character::Character(std::string name) : _name(name), _nbMateria(0)
{
	for (int i = 0; i < 4; i++)
		_materiaTab[i] = NULL;
}

Character::Character(Character const & src) :
			_name(src._name), _nbMateria(src._nbMateria)
{
	for (int i = 0; i < 4; i++)
	{
		if (src._materiaTab[i])
			_materiaTab[i] = src._materiaTab[i]->clone();
		else
			_materiaTab[i] = NULL;
	}
}

Character &	Character::operator=(Character const & rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_nbMateria = rhs._nbMateria;
		for (int i = 0; i < 4; i++)
		{
			if (_materiaTab[i])
				delete _materiaTab[i];
			if (rhs._materiaTab[i])
				_materiaTab[i] = rhs._materiaTab[i]->clone();
			else
				_materiaTab[i] = NULL;
		}
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_materiaTab[i])
			delete _materiaTab[i];
	}
}

//MEMBER FUNCS

std::string const &		Character::getName() const
{
	return _name;
}

void					Character::equip(AMateria *m)
{
	if (_nbMateria < 4 && m)
	{
		for (int i = 0; i < _nbMateria; i++)
		{
			if (_materiaTab[i] == m)
				return ;
		}
		_materiaTab[_nbMateria] = m;
		_nbMateria++;
	}
}

void					Character::unequip(int idx)
{
	if (idx >= 0 && idx < _nbMateria && _materiaTab[idx])
	{
		for (int i = idx; i < 3; i++)
		{
			_materiaTab[i] = _materiaTab[i + 1];
			_materiaTab[i + 1] = NULL;
		}
		_nbMateria--;
	}
}

void					Character::use(int idx, ICharacter & target)
{
	if (idx >= 0 && idx < _nbMateria && _materiaTab[idx])
		_materiaTab[idx]->use(target);
}

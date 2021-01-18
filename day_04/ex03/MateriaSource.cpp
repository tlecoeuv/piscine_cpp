
#include "MateriaSource.hpp"

//CANONICAL FUNCS

MateriaSource::MateriaSource() : _nbMateria(0)
{
	for (int i = 0; i < 4; i++)
		_materiaTab[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src) :
				_nbMateria(src._nbMateria)
{
	for (int i = 0; i < 4; i++)
	{
		if (src._materiaTab[i])
			_materiaTab[i] = src._materiaTab[i]->clone();
		else
			_materiaTab[i] = NULL;
	}
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & rhs)
{
	if (this != &rhs)
	{
		_nbMateria = rhs._nbMateria;
		for (int i = 0; i < 4; i++)
		{
			if (rhs._materiaTab[i])
				_materiaTab[i] = rhs._materiaTab[i]->clone();
			else
				_materiaTab[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_materiaTab[i])
			delete _materiaTab[i];
	}
}

//MEMBER FUNCS

void		MateriaSource::learnMateria(AMateria *m)
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

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materiaTab[i] && _materiaTab[i]->getType() == type)
		{
			AMateria *clone = _materiaTab[i]->clone();
			return clone;
		}
	}
	return NULL;
}

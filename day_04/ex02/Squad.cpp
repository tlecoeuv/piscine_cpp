#include "Squad.hpp"
#include <iostream>
#include <string>

//CANONICAL FUNCS

Squad::Squad() : _count(0), _unitTab(NULL)
{
}

Squad::Squad(Squad const & src) : _count(src._count)
{
	if (src._unitTab)
	{
		_unitTab = new ISpaceMarine*[_count];
		for (int i = 0; i < _count; i++)
			_unitTab[i] = src._unitTab[i]->clone();
	}
	else
		_unitTab = NULL;
}

Squad &	Squad::operator=(Squad const & rhs)
{
	if (this != &rhs)
	{
		if (_unitTab)
		{
			for(int i = 0; i < _count; i++)
				delete _unitTab[i];
			delete[] _unitTab;
		}
		_count = rhs._count;
		_unitTab = new ISpaceMarine*[_count];
		for (int i = 0; i < _count; i++)
			_unitTab[i] = rhs._unitTab[i]->clone();
	}
	return *this;
}

Squad::~Squad()
{
	if (_unitTab)
	{
		for(int i = 0; i < _count; i++)
			delete _unitTab[i];
		delete[] _unitTab;
	}
}

//MEMBER FUNCS

int				Squad::getCount() const
{
	return _count;
}

ISpaceMarine*	Squad::getUnit(int index) const
{
	if (index >= 0 && index < _count)
		return _unitTab[index];
	return NULL;
}

int				Squad::push(ISpaceMarine * newUnit)
{
	if (!newUnit)
		return 1;
	if (!_unitTab)
	{
		_unitTab = new ISpaceMarine*[1];
		_unitTab[0] = newUnit;
		_count = 1;
	}
	else
	{
		for (int i = 0; i < _count; i++)
		{
			if (_unitTab[i] == newUnit)
				return (1);
		}
		ISpaceMarine **tmp = new ISpaceMarine*[_count + 1];
		for (int i = 0; i < _count; i++)
			tmp[i] = _unitTab[i];
		delete[] _unitTab;
		tmp[_count] = newUnit;
		_count++;
		_unitTab = tmp;
	}
	return (0);
}

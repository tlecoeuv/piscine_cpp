#ifndef SQUAD_HPP
# define SQUAD_HPP

#include <iostream>
#include <string>
#include "ISquad.hpp"

class Squad : public ISquad
{
public:
	Squad(void);
	Squad(Squad const & src);
	virtual ~Squad(void);
	Squad & operator=(Squad const & rhs);

	virtual int 			getCount() const;
	virtual	ISpaceMarine*	getUnit(int) const;
	virtual int				push(ISpaceMarine*);

private:
	int				_count;
	ISpaceMarine**	_unitTab;
};

#endif

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource(void);
	MateriaSource(MateriaSource const & src);
	virtual ~MateriaSource(void);
	MateriaSource & operator=(MateriaSource const & rhs);

	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const & type);

private:
	AMateria	*_materiaTab[4];
	int			_nbMateria;

};

#endif

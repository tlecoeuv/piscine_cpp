#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
class ICharacter;

class	AMateria
{
public:

	AMateria(void);
	AMateria(AMateria const & src);
	AMateria(std::string const & type);
	virtual ~AMateria(void);

	AMateria & operator=(AMateria const & rhs);

	std::string const &		getType() const;
	unsigned int			getXP() const;
	void					setXP(int amount);

	virtual AMateria*		clone() const = 0;
	virtual void			use(ICharacter& target);

private:
	std::string			_type;
	unsigned int		_xp;
};

#endif

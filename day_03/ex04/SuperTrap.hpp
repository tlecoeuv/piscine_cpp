#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class		SuperTrap : virtual public FragTrap, virtual public NinjaTrap 
{
public:
  	SuperTrap(std::string name);
	~SuperTrap();

	void			meleeAttack(std::string const & target);
	void			rangedAttack(std::string const & target);

	SuperTrap &		operator=(SuperTrap const &rhs);

private:
	SuperTrap(SuperTrap const &src);
	SuperTrap();
};

#endif

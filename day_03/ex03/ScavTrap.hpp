#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class		ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string name);
	~ScavTrap();

	ScavTrap &		operator=(ScavTrap const &rhs);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	challengeNewcomer(std::string const & target);

private:
	ScavTrap(ScavTrap const &src);
	ScavTrap();
};

#endif

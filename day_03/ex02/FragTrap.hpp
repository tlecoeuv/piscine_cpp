#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class		FragTrap : public ClapTrap
{
public:
	FragTrap(std::string name);
	~FragTrap();

	FragTrap &		operator=(FragTrap const &rhs);

	void	vaulthunter_dot_exe(std::string const & target);

private:
	FragTrap(FragTrap const &src);
	FragTrap();
};

#endif

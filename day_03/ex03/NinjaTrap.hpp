#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class		NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(std::string name);
	~NinjaTrap();

	NinjaTrap &		operator=(NinjaTrap const &rhs);

	void			ninjaShoebox(ClapTrap &clap);
	void			ninjaShoebox(FragTrap &frag);
	void			ninjaShoebox(ScavTrap &scav);
	void			ninjaShoebox(NinjaTrap &ninja);

private:
	NinjaTrap(NinjaTrap const &src);
	NinjaTrap();
};

#endif

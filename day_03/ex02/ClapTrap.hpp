#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class		ClapTrap
{
public:
   ClapTrap(std::string name);
   ~ClapTrap();

   ClapTrap &		operator=(ClapTrap const &rhs);

   void	rangedAttack(std::string const & target);
   void	meleeAttack(std::string const & target);
   void	takeDamage(unsigned int amount);
   void	beRepaired(unsigned int amount);

protected:
   ClapTrap(ClapTrap const &src);
   ClapTrap();

   void	displayState();
   std::string	_name;
   int			_hitPoints;
   int			_maxHitPoints;
   int			_energyPoints;
   int			_maxEnergyPoints;
   int			_level;
   int			_meleeAttackDamage;
   int			_rangedAttackDamage;
   int			_armorDamageReduction;
};

#endif

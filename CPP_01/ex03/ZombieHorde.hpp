#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class	 ZombieHorde
{
	public:
		ZombieHorde(int n);
		~ZombieHorde(void);

		void	announce(void) const;

	private:
		int					_sizeHorde;
		Zombie*				_Horde;
		static std::string	_names[6];

};

#endif

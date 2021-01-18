#ifndef REPERTORY_HPP
# define REPERTORY_HPP

#include <iostream>
#include <string>
#include <limits>
#include <ios>
#include "contact.hpp"

class Repertory
{
	public:
		Repertory();
		void	add_contact();
		void	search() const;

	private:
		Contact	_contact_tab[8];
		int		_nb_contact;
};

#endif

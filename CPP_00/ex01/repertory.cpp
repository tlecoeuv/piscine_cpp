#include "repertory.hpp"

Repertory::Repertory() : _nb_contact(0)
{

}

void	Repertory::add_contact()
{
	if (_nb_contact >= 8)
		std::cout << "The repertory is full" << std::endl;
	else
	{
		_contact_tab[_nb_contact].init();
		_nb_contact++;
		std::cout << "contact succesfully added" << std::endl;
	}
}

void	Repertory::search() const
{
	std::string		str_index;
	int				index;

	if (_nb_contact == 0)
	{
		std::cout << "no contact for the moment, use ADD to create a new contact" << std::endl;
		return ;
	}
	for (int i = 0; i < _nb_contact; i++)
	{
		std::cout << "|         " << i << "|";
		_contact_tab[i].print_res();
	}
	std::cout << "enter an index to have contact information: ";
	std::getline(std::cin, str_index);
	index = str_index[0] - '0';
	if (index > _nb_contact - 1 || index < 0)
		std::cout << "index not valid" << std::endl;
	else
		_contact_tab[index].print_coord();
}

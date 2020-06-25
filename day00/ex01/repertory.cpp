#include "repertory.hpp"

Repertory::Repertory() : m_nb_contact(0)
{

}

void Repertory::add_contact()
{
  if (m_nb_contact >= 8)
    std::cout << "the repertory is full" << std::endl;
  else
  {
    m_contact_tab[m_nb_contact].init();
    m_nb_contact++;
    std::cout << "contact succesfully added" << std::endl;
  }
}

void Repertory::print()
{
  for (int i = 0; i < m_nb_contact; i++)
  {
    std::cout << "index :" << i << std::endl;
    m_contact_tab[i].print();
  }
}

#ifndef DEF_REPERTORY
#define DEF_REPERTORY

#include <iostream>
#include <string>
#include "contact.hpp"

class Repertory
{
    public:
      Repertory();
      void add_contact();
      void print();

    private:
      Contact m_contact_tab[8];
      int     m_nb_contact;
};

#endif

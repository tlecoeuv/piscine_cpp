#include <iostream>
#include <string>
#include "repertory.hpp"

using namespace std;

int main()
{
  Repertory   rep;
  string      command;

  cout << "Welcome on this phonebook!" << endl;
  cout << "Available commands are : ADD, SEARCH, EXIT." << endl;

  while (command.compare("EXIT") != 0)
  {
    cout << "enter a command:" << endl;
    getline(cin, command);

    if (command.compare("ADD") == 0)
      rep.add_contact();
    else if (command.compare("SEARCH") == 0)
    {
      rep.print();
      cout << "choose an index:" << endl;
    }
  }
  return (0);
}

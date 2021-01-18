
#include "Human.hpp"

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "A Human punch " << target << "!" << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "A Human throw something at " << target << "!" << std::endl;
}

void	Human::intimidatingShout(std::string const & target)
{
	std::cout << "A human is shooting at " << target << "!" << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	std::string	fctNames[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	void (Human::*array[3])(std::string const &);
	array[0] = &Human::meleeAttack;
	array[1] = &Human::rangedAttack;
	array[2] = &Human::intimidatingShout;

	for (int i = 0; i < 3; i++)
	{
		if (action_name.compare(fctNames[i]) == 0)
			return (this->*array[i])(target);
	}
	std::cout << action_name << " isn't a valid action." << std::endl;
}


#include "Human.hpp"

Human::Human(void)
{
}

Human::~Human(void)
{
}

std::string		Human::identify(void) const
{
	return(this->_Brain.identify());
}


Brain const	& Human::getBrain(void) const
{
	return (this->_Brain);
}

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class		Peon : public Victim
{
public:
	Peon(std::string name);
	Peon(Peon const & src);
	virtual ~Peon();

	virtual void	getPolymorphed() const;
private:
	Peon();
};

#endif

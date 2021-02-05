#ifndef CORRECTIONVICTIM_HPP
# define CORRECTIONVICTIM_HPP

#include "Victim.hpp"

class		CorrectionVictim : public Victim
{
public:
	CorrectionVictim(std::string name);
	CorrectionVictim(CorrectionVictim const & src);
	virtual ~CorrectionVictim();

	virtual void	getPolymorphed() const;
private:
	CorrectionVictim();
};

#endif

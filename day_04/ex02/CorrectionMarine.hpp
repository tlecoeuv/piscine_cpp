#ifndef CORRECTIONMARINE_H
# define CORRECTIONMARINE_H

#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"

class CorrectionMarine : public ISpaceMarine
{
public:
	CorrectionMarine(void);
	CorrectionMarine(CorrectionMarine const & src);
	virtual ~CorrectionMarine(void);
	CorrectionMarine & operator=(CorrectionMarine const & rhs);

	virtual ISpaceMarine*	clone() const;
	virtual void			battleCry() const;
	virtual void			rangedAttack() const;
	virtual void			meleeAttack() const;
private:

};

#endif

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class	Fixed
{
public:
	Fixed();
	Fixed(Fixed const &src);
	Fixed(int const);
	Fixed(float const);
	~Fixed();

	Fixed &		operator=(Fixed const &rhs);

	int			getRawBits() const;
	void		setRawBits(int const raw);
	float		toFloat() const;
	int			toInt() const;

private:
	int					_value;
	static int const	_nbBits;
};

std::ostream	&operator<<(std::ostream & o, Fixed const & rhs);

#endif

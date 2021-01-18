#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class	Fixed
{
public:
	Fixed();
	Fixed(Fixed const &src);
	~Fixed();

	Fixed &		operator=(Fixed const &rhs);

	int			getRawBits() const;
	void		setRawBits(int const raw);

private:
	int					_raw;
	static int const	_nbBits;
};


#endif

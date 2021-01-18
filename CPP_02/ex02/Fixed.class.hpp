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

	Fixed		operator+(Fixed const &rhs) const;
	Fixed		operator-(Fixed const &rhs) const;
	Fixed		operator*(Fixed const &rhs) const;
	Fixed		operator/(Fixed const &rhs) const;

	bool		operator>(Fixed const &rhs) const;
	bool		operator<(Fixed const &rhs) const;
	bool		operator>=(Fixed const &rhs) const;
	bool		operator<=(Fixed const &rhs) const;
	bool		operator==(Fixed const &rhs) const;
	bool		operator!=(Fixed const &rhs) const;

	Fixed		operator++();		//++i
	Fixed		operator++(int);	//i++
	Fixed		operator--();
	Fixed		operator--(int);

	int			getRawBits() const;
	void		setRawBits(int const raw);
	float		toFloat() const;
	int			toInt() const;

	static Fixed &			min(Fixed &a, Fixed &b);
	static Fixed const &	min(Fixed const &a, Fixed const &b);
	static Fixed &			max(Fixed &a, Fixed &b);
	static Fixed const &	max(Fixed const &a, Fixed const &b);

private:
	int					_value;
	static int const	_nbBits;
};

std::ostream	&operator<<(std::ostream & o, Fixed const & rhs);

#endif

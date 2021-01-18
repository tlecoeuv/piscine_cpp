
#include "Fixed.class.hpp"
#include <cmath>

const int	Fixed::_nbBits = 8;

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;

	*this = src;

	return;
}

Fixed::Fixed(int const val)
{
	std::cout << "int constructor called" << std::endl;
	this->_value = val << _nbBits;
}

Fixed::Fixed(float const val)
{
	std::cout << "float constructor called" << std::endl;
	this->_value = roundf(val * (1 << _nbBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &		Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs)
		this->_value = rhs.getRawBits();

	return *this;
}

int			Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void		Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float		Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << this->_nbBits));
}

int			Fixed::toInt(void) const
{
	return ((int)(this->_value >> this->_nbBits));
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

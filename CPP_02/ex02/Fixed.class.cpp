
#include "Fixed.class.hpp"
#include <cmath>


const int	Fixed::_nbBits = 8;
// ************************************************************************** //
//                         Constructors & Destructors:                        //
// ************************************************************************** //

Fixed::Fixed() : _value(0)
{

}

Fixed::Fixed(Fixed const &src)
{
	*this = src;

	return;
}

Fixed::Fixed(int const val)
{
	this->_value = val << _nbBits;
}

Fixed::Fixed(float const val)
{
	this->_value = roundf(val * (1 << _nbBits));
}

Fixed::~Fixed()
{

}

// ************************************************************************** //
//                            Member functions:                               //
// ************************************************************************** //


int			Fixed::getRawBits() const
{
	return (this->_value);
}

void		Fixed::setRawBits(int const raw)
{
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

// ************************************************************************** //
//                                Operators:                                  //
// ************************************************************************** //

Fixed &		Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		this->_value = rhs.getRawBits();

	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

Fixed		Fixed::operator+(Fixed const &rhs) const
{
	Fixed	ret;

	ret.setRawBits(this->_value + rhs.getRawBits());
	return ret;
}

Fixed		Fixed::operator-(Fixed const &rhs) const
{
	Fixed	ret;

	ret.setRawBits(this->_value - rhs.getRawBits());
	return ret;
}

Fixed		Fixed::operator*(Fixed const &rhs) const
{
	Fixed	ret;

	ret.setRawBits((this->_value * rhs.getRawBits()) >> this->_nbBits);
	return ret;
}

Fixed		Fixed::operator/(Fixed const &rhs) const
{
	Fixed	ret;

	ret.setRawBits((1 << this->_nbBits) * this->_value / rhs._value);
	return ret;
}

bool		Fixed::operator>(Fixed const &rhs) const
{
	return (this->_value > rhs.getRawBits());
}

bool		Fixed::operator<(Fixed const &rhs) const
{
	return (this->_value < rhs.getRawBits());
}

bool		Fixed::operator>=(Fixed const &rhs) const
{
	return (this->_value >= rhs.getRawBits());
}

bool		Fixed::operator<=(Fixed const &rhs) const
{
	return (this->_value <= rhs.getRawBits());
}

bool		Fixed::operator==(Fixed const &rhs) const
{
	return (this->_value == rhs.getRawBits());
}

bool		Fixed::operator!=(Fixed const &rhs) const
{
	return (this->_value != rhs.getRawBits());
}

Fixed		Fixed::operator++()
{
	this->_value = this->_value + 1;
	return (*this);
}

Fixed		Fixed::operator++(int)
{
	Fixed	ret(*this);

	++(*this);
	return ret;
}

Fixed		Fixed::operator--()
{
	this->_value = this->_value - 1;
	return (*this);
}

Fixed		Fixed::operator--(int)
{
	Fixed	ret(*this);

	--(*this);
	return (ret);
}

// ************************************************************************** //
//                                Non members:                                //
// ************************************************************************** //

Fixed &			Fixed::min(Fixed &a, Fixed &b)
{
	return((a < b) ? a : b);
}

Fixed const &	Fixed::min(Fixed const &a, Fixed const &b)
{
	return((a < b) ? a : b);
}

Fixed &			Fixed::max(Fixed &a, Fixed &b)
{
	return((a > b) ? a : b);
}

Fixed const &	Fixed::max(Fixed const &a, Fixed const &b)
{
	return((a > b) ? a : b);
}

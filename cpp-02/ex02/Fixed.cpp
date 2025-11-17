#include "Fixed.hpp"

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	this -> _raw = 0;
	return;
}

Fixed::Fixed(const Fixed& other) : _raw(other._raw)
{
	//std::cout << "Copy constructor called" << std::endl;
	return;
}

Fixed &Fixed::operator=(const Fixed& other)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this -> _raw = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
	return;
}

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this -> _raw);
}

void Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this -> _raw = raw;
	return;
}

Fixed::Fixed(const int param)
{
	//std::cout << "Int constructor called" << std::endl;
	this -> _raw = param;
	for (int i = 0; i < this -> _fractional; i++)
	{
		this -> _raw *= 2;
	}
	return;
}

Fixed::Fixed(const float param)
{
	//std::cout << "Float constructor called" << std::endl;
	float value = param;
	for (int i = 0; i < this -> _fractional; i++)
	{
		value *= 2;
	}
	this -> _raw = roundf(value);
	return;
}

float Fixed::toFloat() const
{
	float toReturn = this -> _raw;
	for (int i = 0; i < this -> _fractional; i++)
	{
		toReturn /= 2;
	}
	return (toReturn);
}

int Fixed::toInt() const
{
	int toReturn = this -> _raw;
	for (int i = 0; i < this -> _fractional; i++)
	{
		toReturn /= 2;
	}
	return (toReturn);
}

std::ostream &operator<<(std::ostream &o, const Fixed &fixed)
{
	o << fixed.toFloat();
	return (o);
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return (this -> _raw > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (this -> _raw < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (this -> _raw >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (this -> _raw <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (this -> _raw == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return (this -> _raw != fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed& other) const
{
	return (Fixed(this -> toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return (Fixed(this -> toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return (Fixed(this -> toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return (Fixed(this -> toFloat() / other.toFloat()));
}

Fixed Fixed::operator++()
{
	this -> setRawBits(this -> getRawBits() + 1);
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed value = *this;
	this -> setRawBits(this -> getRawBits() + 1);
	return value;
}

Fixed Fixed::operator--()
{
	this -> setRawBits(this -> getRawBits() - 1);
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed value = *this;
	this -> setRawBits(this -> getRawBits() - 1);
	return value;
}

Fixed& Fixed::min(Fixed &s1, Fixed &s2)
{
	if (s1.getRawBits() < s2.getRawBits())
		return (s1);
	else
		return (s2);
}

const Fixed& Fixed::min(const Fixed &s1, const Fixed &s2)
{
	if (s1.getRawBits() < s2.getRawBits())
		return (s1);
	else
		return (s2);
}

Fixed& Fixed::max(Fixed &s1, Fixed &s2)
{
	if (s1.getRawBits() > s2.getRawBits())
		return (s1);
	else
		return (s2);
}

const Fixed& Fixed::max(const Fixed &s1, const Fixed &s2)
{
	if (s1.getRawBits() > s2.getRawBits())
		return (s1);
	else
		return (s2);
}
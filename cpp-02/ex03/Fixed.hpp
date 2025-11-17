#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	int _raw;
	static const int _fractional = 8;

	public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed &operator=(const Fixed& other);
	~Fixed();
	Fixed(const int param);
	Fixed(const float param);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	static Fixed &min(Fixed &s1, Fixed &s2);
	static const Fixed &min(const Fixed &s1, const Fixed &s2);
	static Fixed &max(Fixed &s1, Fixed &s2);
	static const Fixed &max(const Fixed &s1, const Fixed &s2);

	bool operator>(const Fixed &fixed) const;
	bool operator<(const Fixed &fixed) const;
	bool operator>=(const Fixed &fixed) const;
	bool operator<=(const Fixed &fixed) const;
	bool operator==(const Fixed &fixed) const;
	bool operator!=(const Fixed &fixed) const;

	Fixed operator+(const Fixed& other) const;
	Fixed operator-(const Fixed& other) const;
	Fixed operator*(const Fixed& other) const;
	Fixed operator/(const Fixed& other) const;

	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);
};

std::ostream &operator<<(std::ostream &o, const Fixed &fixed);

#endif
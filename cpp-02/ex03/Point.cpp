#include "Point.hpp"

Point::Point() : x(Fixed(0)), y(Fixed(0))
{
	return;
}

Point::Point(float x, float y) : x(Fixed(x)), y(Fixed(y))
{
	return;
}

Point::Point(const Point& other) : x(other.x), y(other.y)
{
	return;
}

Point &Point::operator=(const Point& other)
{
	if (this == &other)
		return (*this);
	//this -> x = other.getX();
	//this -> y = other.getY();
	return (*this);
}

Point::~Point()
{
	return;
}

Fixed Point::getX() const
{
	return (this -> x);
}

Fixed Point::getY() const
{
	return (this -> y);
}
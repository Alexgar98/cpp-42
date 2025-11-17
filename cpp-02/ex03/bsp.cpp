#include "Point.hpp"

Fixed area(const Point a, const Point b, const Point c)
{
	Fixed total = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / Fixed(2);
	if (total < Fixed(0))
		total = Fixed(0) - total;
	return total;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed abc = area(a, b, c);
	Fixed pbc = area(point, b, c);
	Fixed apc = area(a, point, c);
	Fixed abp = area(a, b, point);
	return (abc == (pbc + apc + abp) && pbc != Fixed(0) && apc != Fixed(0) && abp != Fixed(0));
}
#include <iostream>
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	Point a = Point(7,7);
	Point b = Point(11,1);
	Point c = Point(2,1);
	Point to_check = Point(7,1);
	if (bsp(a, b, c, to_check))
		std::cout << "The point is in the triangle" << std::endl;
	else
		std::cout << "The point is not in the triangle" << std::endl;
	return 0;
}
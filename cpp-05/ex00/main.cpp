#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat manolito = Bureaucrat("Manolito", 1);

		std::cout << manolito << std::endl;
		manolito.incrementGrade();
		std::cout << manolito << std::endl;
		manolito.decrementGrade();
		std::cout << manolito << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
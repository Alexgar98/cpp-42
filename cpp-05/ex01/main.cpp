#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat manolito = Bureaucrat("Manolito", 30);
		Form *form = new Form("Allow illegalities in the next Aston Martin F1 car", 1, 2);

		std::cout << manolito << std::endl;
		std::cout << *form << std::endl;
		manolito.signForm(*form);
		delete(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
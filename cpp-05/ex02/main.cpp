#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat manolito = Bureaucrat("Manolito", 2);
		ShrubberyCreationForm *form = new ShrubberyCreationForm("pepito");
		RobotomyRequestForm *roboform = new RobotomyRequestForm("juanito");
		PresidentialPardonForm *presiform = new PresidentialPardonForm("luisito");
		manolito.signForm(*form);
		manolito.signForm(*roboform);
		manolito.signForm(*presiform);
		manolito.executeForm(*form);
		manolito.executeForm(*roboform);
		manolito.executeForm(*presiform);
		delete(form);
		delete(roboform);
		delete(presiform);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
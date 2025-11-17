#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		Intern npc = Intern();
		AForm *form = npc.makeForm("ShrubberyCreationForm", "paquito");
		AForm *roboform = npc.makeForm("RobotomyRequestForm", "juanito");
		AForm *presiform = npc.makeForm("PresidentialPardonForm", "luisito");
		//AForm *badform = npc.makeForm("doragon cro", "jaimito");
		Bureaucrat manolito = Bureaucrat("Manolito", 2);
		manolito.signForm(*form);
		manolito.signForm(*roboform);
		manolito.signForm(*presiform);
		manolito.executeForm(*form);
		manolito.executeForm(*roboform);
		manolito.executeForm(*presiform);
		delete(form);
		delete(roboform);
		delete(presiform);
		//delete(badform);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
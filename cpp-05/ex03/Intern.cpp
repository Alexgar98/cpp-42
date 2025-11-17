#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern created" << std::endl;
	return;
}

Intern::Intern(const Intern &other)
{
	std::cout << "Intern copied" << std::endl;
	(void)other;
	return;
}

Intern &Intern::operator=(const Intern &other)
{
	std::cout << "Intern assigned" << std::endl;
	(void)other;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern destroyed" << std::endl;
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	AForm *to_return = NULL;
	AForm *possibleForms[] = {new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target), NULL};
	for (int i = 0; possibleForms[i]; i++)
	{
		if (name == possibleForms[i] -> getName())
			to_return = possibleForms[i];
		else
			delete(possibleForms[i]);
	}
	if (!to_return)
		throw Intern::InvalidForm();
	std::cout << "Intern creates " << to_return -> getName() << std::endl;
	return (to_return);
}
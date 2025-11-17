#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	this -> _target = "paquito";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	this -> _target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : _target(other._target)
{
	std::cout << "Form copied" << std::endl;
	return;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	this -> _target = other._target;
	std::cout << "Form assigned" << std::endl;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Form destroyed" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!(this -> getSigned()))
		throw AForm::NotSignedException();
	else if (executor.getGrade() > (this -> getGradeToExecute()))
		throw AForm::GradeTooLowException();
	else
		std::cout << this -> _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
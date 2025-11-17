#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	this -> _target = "paquito";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this -> _target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : _target(other._target)
{
	std::cout << "Form copied" << std::endl;
	return;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	this -> _target = other._target;
	std::cout << "Form assigned" << std::endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Form destroyed" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!(this -> getSigned()))
		throw AForm::NotSignedException();
	else if (executor.getGrade() > (this -> getGradeToExecute()))
		throw AForm::GradeTooLowException();
	else
	{
		srand(time(0));
		int nbr = rand();
		if (nbr % 2 == 0)
			std::cout << this -> _target << " has been robotomized" << std::endl;
		else
			std::cout << "Robotomy failed" << std::endl;
	}
}
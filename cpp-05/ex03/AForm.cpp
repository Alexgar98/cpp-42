#include "AForm.hpp"

AForm::AForm() : _name("Default form"), _gradeToSign(150), _gradeToExecute(150)
{
	this -> _signed = false;
	std::cout << "Form created by default" << std::endl;
}

AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
	{
		throw AForm::GradeTooHighException();
	}
	if (gradeToSign > 150 || gradeToExecute > 150)
	{
		throw AForm::GradeTooLowException();
	}
	this -> _signed = false;
	std::cout << "Form created" << std::endl;
	return;
}

AForm::AForm(const AForm &other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	this -> _signed = other._signed;
	std::cout << "Form copied" << std::endl;
	return;
}

AForm &AForm::operator=(const AForm &other)
{
	this -> _signed = other._signed;
	std::cout << "Form assigned" << std::endl;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "Form destroyed" << std::endl;
}

std::string AForm::getName() const
{
	return (this -> _name);
}

bool AForm::getSigned() const
{
	return (this -> _signed);
}

int AForm::getGradeToSign() const
{
	return (this -> _gradeToSign);
}

int AForm::getGradeToExecute() const
{
	return (this -> _gradeToExecute);
}

void AForm::beSigned(Bureaucrat &signer)
{
	if (signer.getGrade() > this -> _gradeToSign)
		throw AForm::GradeTooLowException();
	else
	{
		this -> _signed = true;
		return;
	}
}

std::ostream &operator<<(std::ostream &o, const AForm &form)
{
	o << form.getName() << ", grade to sign " << form.getGradeToSign() << ", grade to execute " << form.getGradeToExecute();
	return (o);
}
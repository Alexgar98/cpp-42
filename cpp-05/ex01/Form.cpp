#include "Form.hpp"

Form::Form() : _name("Default form"), _gradeToSign(150), _gradeToExecute(150)
{
	this -> _signed = false;
	std::cout << "Form created by default" << std::endl;
}

Form::Form(const std::string name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
	{
		throw Form::GradeTooHighException();
	}
	if (gradeToSign > 150 || gradeToExecute > 150)
	{
		throw Form::GradeTooLowException();
	}
	this -> _signed = false;
	std::cout << "Form created" << std::endl;
	return;
}

Form::Form(const Form &other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	this -> _signed = other._signed;
	std::cout << "Form copied" << std::endl;
	return;
}

Form &Form::operator=(const Form &other)
{
	this -> _signed = other._signed;
	std::cout << "Form assigned" << std::endl;
	return (*this);
}

Form::~Form()
{
	std::cout << "Form destroyed" << std::endl;
}

std::string Form::getName() const
{
	return (this -> _name);
}

bool Form::getSigned()
{
	return (this -> _signed);
}

int Form::getGradeToSign() const
{
	return (this -> _gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (this -> _gradeToExecute);
}

void Form::beSigned(Bureaucrat &signer)
{
	if (signer.getGrade() > this -> _gradeToSign)
		throw Form::GradeTooLowException();
	else
		return;
}

std::ostream &operator<<(std::ostream &o, const Form &form)
{
	o << form.getName() << ", grade to sign " << form.getGradeToSign() << ", grade to execute " << form.getGradeToExecute();
	return (o);
}
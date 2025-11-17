#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Paquito")
{
	std::cout << "Bureaucrat created by default" << std::endl;
	this -> _grade = 150;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	this -> _grade = grade;
	std::cout << "Bureaucrat created" << std::endl;
	return;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name)
{
	std::cout << "Bureaucrat copied" << std::endl;
	this -> _grade = other._grade;
	return;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Bureaucrat assigned" << std::endl;
	this -> _grade = other._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destroyed" << std::endl;
}

std::string Bureaucrat::getName() const
{
	return (this -> _name);
}

int Bureaucrat::getGrade() const
{
	return (this -> _grade);
}

void Bureaucrat::incrementGrade()
{
	if (this -> _grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this -> _grade -= 1;
}

void Bureaucrat::decrementGrade()
{
	if (this -> _grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this -> _grade += 1;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return (o);
}
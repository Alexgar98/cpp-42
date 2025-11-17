#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "AForm.hpp"
//# include "ShrubberyCreationForm.hpp"

class AForm;

class Bureaucrat
{
	const std::string _name;
	int _grade;

	public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();
	std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(AForm &form);
	void executeForm(AForm const & form);

	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("You are not allowed to have a grade higher than 1. If you think this is wrong, please fill complaint 69A in form 420, which you can obtain by filling form 042B with a previous appointment asked by sending an email with two certificated copies of filled form 384");
		}
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("You are not allowed to decrement your grade lower than 150. If you think this is wrong, please fill complaint 69B in form 042, which you can obtain by filling form 420B with a previous appointment asked by sending an email with two certificated copies of filled form 384R");
		}
	};
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bureaucrat);

#endif
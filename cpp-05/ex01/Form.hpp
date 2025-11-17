#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	std::string const _name;
	bool _signed;
	int const _gradeToSign;
	int const _gradeToExecute;

	public:
	Form();
	Form(const std::string name, int gradeToSign, int gradeToExecute);
	Form(const Form &other);
	Form &operator=(const Form &other);
	~Form();

	std::string getName() const;
	bool getSigned();
	int getGradeToSign() const;
	int getGradeToExecute() const;
	void beSigned(Bureaucrat &signer);

	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("A form must be processed by a bureaucrat; thus, this grade was too high. If you think this is wrong, please sell your data to your nearest, trusted government official, which requires you to fill form 33FA and repeat that little number");
		}
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("A form must be processed by a bureaucrat; thus, this grade was too low. If you think this is wrong, please sell your data to your nearest, trusted government official, which requires you to fill form 33FA and believe in the plan");
		}
	};
};

std::ostream &operator<<(std::ostream &o, const Form &form);

#endif
#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	std::string const _name;
	bool _signed;
	int const _gradeToSign;
	int const _gradeToExecute;

	public:
	AForm();
	AForm(const std::string name, int gradeToSign, int gradeToExecute);
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
	virtual ~AForm();

	/*virtual*/ std::string getName() const/* = 0*/;
	bool getSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	void beSigned(Bureaucrat &signer);
	virtual void execute(Bureaucrat const & executor) const = 0;

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

	class NotSignedException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return ("This form is not signed and thus cannot be executed. Please refer to Document 33, section fa), paragraph 14 for more information");
		}
	};
};

std::ostream &operator<<(std::ostream &o, const AForm &form);

#endif
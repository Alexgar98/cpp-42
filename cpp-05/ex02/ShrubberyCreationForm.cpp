#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	this -> _target = "paquito";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this -> _target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : _target(other._target)
{
	std::cout << "Form copied" << std::endl;
	return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	this -> _target = other._target;
	std::cout << "Form assigned" << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Form destroyed" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!(this -> getSigned()))
		throw AForm::NotSignedException();
	else if (executor.getGrade() > (this -> getGradeToExecute()))
		throw AForm::GradeTooLowException();
	else
	{
		try
		{
			std::string file = this -> _target + "_shrubbery";
			std::ofstream outfile(file.c_str());
			std::string shrub = "       #\n      ###\n     #####\n    #######\n   #########\n  ###########\n #############\n###############\n       H\n       H\n       H";
			outfile << shrub << std::endl;
			outfile.close();
			return;
		}
		catch (std::exception &e)
		{
			std::cout << "Could not create the shrub because " << e.what() << std::endl;
		}
	}
}
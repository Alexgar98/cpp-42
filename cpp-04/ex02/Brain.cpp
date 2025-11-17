#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created" << std::endl;
	return;
}

Brain::Brain(const Brain &other)
{
	for (int i = 0; i < 100; i++)
	{
		(this -> ideas)[i] = (other.ideas)[i];
	}
	std::cout << "Brain copied" << std::endl;
	return;
}

Brain &Brain::operator=(const Brain &other)
{
	for (int i = 0; i < 100; i++)
	{
		(this -> ideas)[i] = (other.ideas)[i];
	}
	std::cout << "Brain assigned" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
	return;
}
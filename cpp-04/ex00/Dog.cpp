#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this -> type = "Dog";
	std::cout << "Dog " << this -> type << " created" << std::endl;
	return;
}

Dog::Dog(const Dog &other) : Animal()
{
	this -> type = other.type;
	std::cout << "Dog " << this -> type << " copied" << std::endl;
	return;
}

Dog &Dog::operator=(const Dog &other)
{
	this -> type = other.type;
	std::cout << "Dog " << this -> type << " assigned" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog " << this -> type << " destroyed" << std::endl;
	return;
}

void Dog::makeSound() const
{
	std::cout << "*Insert Dog bark*" << std::endl;
}
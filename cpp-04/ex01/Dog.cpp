#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this -> type = "Dog";
	this -> _brain = new Brain();
	std::cout << "Dog " << this -> type << " created" << std::endl;
	return;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	this -> type = other.type;
	this -> _brain = new Brain(*(other._brain));
	std::cout << "Dog " << this -> type << " copied" << std::endl;
	return;
}

Dog &Dog::operator=(const Dog &other)
{
	this -> type = other.type;
	delete (this -> _brain);
	this -> _brain = new Brain(*(other._brain));
	std::cout << "Dog " << this -> type << " assigned" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete (this -> _brain);
	std::cout << "Dog " << this -> type << " destroyed" << std::endl;
	return;
}

void Dog::makeSound() const
{
	std::cout << "*Insert Dog bark*" << std::endl;
}
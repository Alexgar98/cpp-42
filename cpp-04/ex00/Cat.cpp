#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this -> type = "Cat";
	std::cout << "Cat " << this -> type << " created" << std::endl;
	return;
}

Cat::Cat(const Cat &other) : Animal()
{
	this -> type = other.type;
	std::cout << "Cat " << this -> type << " copied" << std::endl;
	return;
}

Cat &Cat::operator=(const Cat &other)
{
	this -> type = other.type;
	std::cout << "Cat " << this -> type << " assigned" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat " << this -> type << " destroyed" << std::endl;
	return;
}

void Cat::makeSound() const
{
	std::cout << "*Insert cat meow*" << std::endl;
}
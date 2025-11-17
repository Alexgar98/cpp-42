#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	this -> type = "Cat";
	this -> _brain = new Brain();
	std::cout << "Cat " << this -> type << " created" << std::endl;
	return;
}

Cat::Cat(const Cat &other) : AAnimal()
{
	this -> type = other.type;
	this -> _brain = new Brain(*(other._brain));
	std::cout << "Cat " << this -> type << " copied" << std::endl;
	return;
}

Cat &Cat::operator=(const Cat &other)
{
	this -> type = other.type;
	delete (this -> _brain);
	this -> _brain = new Brain(*(other._brain));
	std::cout << "Cat " << this -> type << " assigned" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete (this -> _brain);
	std::cout << "Cat " << this -> type << " destroyed" << std::endl;
	return;
}

void Cat::makeSound() const
{
	std::cout << "*Insert cat meow*" << std::endl;
}
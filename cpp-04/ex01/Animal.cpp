#include "Animal.hpp"

Animal::Animal()
{
	this -> type = "Potato";
	std::cout << "Animal " << this -> type << " created" << std::endl;
	return;
}

Animal::Animal(const Animal &other)
{
	this -> type = other.type;
	std::cout << "Animal " << this -> type << " copied" << std::endl;
	return;
}

Animal &Animal::operator=(const Animal &other)
{
	this -> type = other.type;
	std::cout << "Animal " << this -> type << " assigned" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal " << this -> type << " destroyed" << std::endl;
	return;
}

void Animal::makeSound() const
{
	std::cout << "*Random animal noise*" << std::endl;
}

std::string Animal::getType() const
{
	return (this -> type);
}
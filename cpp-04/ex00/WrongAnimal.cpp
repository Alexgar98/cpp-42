#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this -> type = "Potato";
	std::cout << "WrongAnimal " << this -> type << " created" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	this -> type = other.type;
	std::cout << "WrongAnimal " << this -> type << " copied" << std::endl;
	return;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	this -> type = other.type;
	std::cout << "WrongAnimal " << this -> type << " assigned" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal " << this -> type << " destroyed" << std::endl;
	return;
}

void WrongAnimal::makeSound() const
{
	std::cout << "*Random animal noise*" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this -> type);
}
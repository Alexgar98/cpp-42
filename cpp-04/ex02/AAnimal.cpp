#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this -> type = "Potato";
	std::cout << "AAnimal " << this -> type << " created" << std::endl;
	return;
}

AAnimal::AAnimal(const AAnimal &other)
{
	this -> type = other.type;
	std::cout << "AAnimal " << this -> type << " copied" << std::endl;
	return;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	this -> type = other.type;
	std::cout << "AAnimal " << this -> type << " assigned" << std::endl;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal " << this -> type << " destroyed" << std::endl;
	return;
}

void AAnimal::makeSound() const
{
	std::cout << "*Random AAnimal noise*" << std::endl;
}

std::string AAnimal::getType() const
{
	return (this -> type);
}
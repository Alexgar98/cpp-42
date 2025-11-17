#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this -> type = "WrongCat";
	std::cout << "WrongCat " << this -> type << " created" << std::endl;
	return;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal()
{
	this -> type = other.type;
	std::cout << "WrongCat " << this -> type << " copied" << std::endl;
	return;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	this -> type = other.type;
	std::cout << "WrongCat " << this -> type << " assigned" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat " << this -> type << " destroyed" << std::endl;
	return;
}

void WrongCat::makeSound() const
{
	std::cout << "*Insert cat meow*" << std::endl;
}
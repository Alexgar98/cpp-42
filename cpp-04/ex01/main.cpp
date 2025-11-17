#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal *animals[10];
	for (int i = 0; i < 10; i++)
	{
		animals[i] = new Dog();
		i++;
		animals[i] = new Cat();
	}
	for (int i = 0; i < 10; i++)
	{
		animals[i] -> makeSound();
	}
	for (int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
	std::cout << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
}
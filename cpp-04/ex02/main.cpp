#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	AAnimal *animals[10];
	//AAnimal notCompile; // <- if this line is uncommented, it will not compile. This is to test that the class is abstract (:
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
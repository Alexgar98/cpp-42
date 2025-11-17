#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this -> _hitPoints = 100;
	this -> _energyPoints = 100;
	this -> _attackDamage = 30;
	std::cout << "FragTrap was created without a name" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this -> _hitPoints = 100;
	this -> _energyPoints = 100;
	this -> _attackDamage = 30;
	std::cout << "FragTrap " << this -> _name << " was created" << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap()
{
	this -> _name = other._name;
	this -> _hitPoints = other._hitPoints;
	this -> _energyPoints = other._energyPoints;
	this -> _attackDamage = other._attackDamage;
	std::cout << "FragTrap " << this -> _name << " was copied" << std::endl;
	return;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	this -> _name = other._name;
	this -> _hitPoints = other._hitPoints;
	this -> _energyPoints = other._energyPoints;
	this -> _attackDamage = other._attackDamage;
	std::cout << "FragTrap " << this -> _name << " was assigned" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this -> _name << " was destroyed" << std::endl;
	return;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this -> _name << ": \"High fives!\"" << std::endl;
}
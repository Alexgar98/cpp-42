#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this -> _hitPoints = 100;
	this -> _energyPoints = 50;
	this -> _attackDamage = 20;
	std::cout << "ScavTrap was created without a name" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this -> _hitPoints = 100;
	this -> _energyPoints = 50;
	this -> _attackDamage = 20;
	std::cout << "ScavTrap " << this -> _name << " was created" << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap()
{
	this -> _name = other._name;
	this -> _hitPoints = other._hitPoints;
	this -> _energyPoints = other._energyPoints;
	this -> _attackDamage = other._attackDamage;
	std::cout << "ScavTrap " << this -> _name << " was copied" << std::endl;
	return;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	this -> _name = other._name;
	this -> _hitPoints = other._hitPoints;
	this -> _energyPoints = other._energyPoints;
	this -> _attackDamage = other._attackDamage;
	std::cout << "ScavTrap " << this -> _name << " was assigned" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this -> _name << " was destroyed" << std::endl;
	return;
}

void ScavTrap::attack(const std::string& target)
{
	if (this -> _energyPoints > 0 && this -> _hitPoints > 0)
	{
		std::cout << "ScavTrap " << this -> _name << " attacks " << target << ", causing " << this -> _attackDamage << " points of damage!" << std::endl;
		this -> _energyPoints -= 1;
	}
	else
		std::cout << "ScavTrap " << this -> _name << " could not attack" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this -> _name << " is in Gate keeper mode" << std::endl;
}
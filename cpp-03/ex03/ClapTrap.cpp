#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this -> _name = "N/A";
	this -> _hitPoints = 10;
	this -> _energyPoints = 10;
	this -> _attackDamage = 0;
	std::cout << "ClapTrap was created without a name" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name)
{
	this -> _name = name;
	this -> _hitPoints = 10;
	this -> _energyPoints = 10;
	this -> _attackDamage = 0;
	std::cout << "ClapTrap " << this -> _name << " was created" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name)
{
	this -> _hitPoints = other._hitPoints;
	this -> _energyPoints = other._energyPoints;
	this -> _attackDamage = other._attackDamage;
	std::cout << "ClapTrap " << this -> _name << " was copied" << std::endl;
	return;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this -> _name = other._name;
	this -> _hitPoints = other._hitPoints;
	this -> _energyPoints = other._energyPoints;
	this -> _attackDamage = other._attackDamage;
	std::cout << "ClapTrap " << this -> _name << " was assigned" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this -> _name << " was destroyed" << std::endl;
	return;
}

void ClapTrap::attack(const std::string& target)
{
	if (this -> _energyPoints > 0 && this -> _hitPoints > 0)
		std::cout << "ClapTrap " << this -> _name << " attacks " << target << ", causing " << this -> _attackDamage << " points of damage!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this -> _name << " could not attack" << std::endl;
		this -> _energyPoints -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this -> _hitPoints > 0)
	{
		std::cout << "ClapTrap " << this -> _name << " received " << amount << " points of damage!" << std::endl;
		this -> _hitPoints -= amount;
	}
	else
		std::cout << "ClapTrap " << this -> _name << " got overkilled" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this -> _energyPoints > 0 && this -> _hitPoints > 0)
	{
		std::cout << "ClapTrap " << this -> _name << " recovered " << amount << " points of health!" << std::endl;
		this -> _energyPoints -= 1;
		this -> _hitPoints += amount;
	}
	else
		std::cout << "ClapTrap " << this -> _name << " could not heal" << std::endl;
}
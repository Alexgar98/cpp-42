#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	this -> FragTrap::_hitPoints = 100;
	this -> ScavTrap::_energyPoints = 50;
	this -> FragTrap::_attackDamage = 20;
	std::cout << "DiamondTrap was created without a name" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	this -> _name = name;
	this -> ClapTrap::_name = name + "_clap_name";
	this -> FragTrap::_hitPoints = 100;
	this -> ScavTrap::_energyPoints = 50;
	this -> FragTrap::_attackDamage = 20;
	std::cout << "DiamondTrap " << this -> _name << " was created" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap()
{
	this -> _name = other._name;
	this -> ClapTrap::_name = other.ClapTrap::_name;
	this -> FragTrap::_hitPoints = other._hitPoints;
	this -> ScavTrap::_energyPoints = other._energyPoints;
	this -> FragTrap::_attackDamage = other._attackDamage;
	std::cout << "DiamondTrap " << this -> _name << " was copied" << std::endl;
	return;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	this -> _name = other._name;
	this -> ClapTrap::_name = other.ClapTrap::_name;
	this -> FragTrap::_hitPoints = other._hitPoints;
	this -> ScavTrap::_energyPoints = other._energyPoints;
	this -> FragTrap::_attackDamage = other._attackDamage;
	std::cout << "DiamondTrap " << this -> _name << " was assigned" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this -> _name << " was destroyed" << std::endl;
	return;
}

void DiamondTrap::attack(const std::string& target)
{
	this -> ScavTrap::attack(target);
	return;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap " << this -> _name << " aka " << this -> ClapTrap::_name << " reporting" << std::endl;
	return;
}
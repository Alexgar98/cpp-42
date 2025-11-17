#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap ct = ScavTrap("Pepito");
	ct.guardGate();
	for (int i = 0; i < 11; i++)
	{
		ct.attack("Paquito");
		ct.takeDamage(1);
		ct.beRepaired(1);
	}
}
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap ct = ClapTrap("Pepito");
	for (int i = 0; i < 11; i++)
	{
		ct.attack("Paquito");
		ct.takeDamage(1);
		ct.beRepaired(1);
	}
}
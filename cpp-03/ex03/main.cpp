#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap ct = DiamondTrap("Pepito");
	ct.whoAmI();
	for (int i = 0; i < 11; i++)
	{
		ct.attack("Paquito");
		ct.takeDamage(1);
		ct.beRepaired(1);
	}
}
#include "FragTrap.hpp"

int main(void)
{
	FragTrap ct = FragTrap("Pepito");
	ct.highFivesGuys();
	for (int i = 0; i < 11; i++)
	{
		ct.attack("Paquito");
		ct.takeDamage(1);
		ct.beRepaired(1);
	}
}
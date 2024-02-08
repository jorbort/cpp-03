#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	FragTrap fraga("fraga");
	FragTrap b;

	b = fraga;

	fraga.attack("enemy");
	b.attack("other enemy");
	b.highFiveGuys();
	fraga.highFiveGuys();
}
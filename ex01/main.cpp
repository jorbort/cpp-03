#include "ClapTrap.HPP"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap trapi("trapi");

	trapi.attack("enemy");
	trapi.takeDamage(4);
	trapi.beRepaired(5);
	trapi.beRepaired(2);
	trapi.takeDamage(10);
	trapi.attack("enemy");
	trapi.beRepaired(2);
}
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap trapi("trapi");

	trapi.attack("enemy");
	trapi.takeDamage(4);
	trapi.beRepaired(5);
	trapi.beRepaired(2);
	trapi.takeDamage(10);
	trapi.attack("other enemy");
	trapi.beRepaired(2);
}
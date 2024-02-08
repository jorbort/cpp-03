#include "ClapTrap.HPP"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scrapy("scrapy");

	scrapy.attack("enemy");
	scrapy.takeDamage(15);
	scrapy.beRepaired(10);
}

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string trap)
{
	this->name = trap; 
	HealthPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << this->getName() << " is now in Gate keeper mode" << std::endl;
}
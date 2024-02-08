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
	std::cout << "scavtrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << this->getName() << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(std::string enemy)
{
	std::cout << this->getName() << " scavtrap attacked " << enemy << std::endl;
}
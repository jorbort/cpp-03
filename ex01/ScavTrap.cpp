#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "scav default constructor called" << std::endl;
	name = ""; 
	HealthPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string trap)
{
	this->name = trap; 
	HealthPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << "scavtrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav)
{
	*this = scav;
	std::cout << "scav copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &scav)
{
	this->name = scav.name;
	this->AttackDamage  = scav.AttackDamage;
	this->EnergyPoints = scav.EnergyPoints;
	this->HealthPoints = scav.HealthPoints;
	std::cout << "scav assignment operator constructor called" << std::endl;
	return (*this);
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
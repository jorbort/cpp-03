#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string trap)
{
	this->setName(trap); 
	this->setHealth(100);
	this->setEnergy(50);
	this->setAttack(20);
	std::cout << "scavtrap constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &scav)
{
	this->name = scav.name;
	this->AttackDamage  = scav.AttackDamage;
	this->EnergyPoints = scav.EnergyPoints;
	this->HealthPoints = scav.HealthPoints;
	std::cout << "assignment constructor called in Scavtrap" << std::endl;
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
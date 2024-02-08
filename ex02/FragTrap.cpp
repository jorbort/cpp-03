#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "default frag constructor invoked" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->setName(name);
	this->setEnergy(100);
	this->setHealth(100);
	this->setAttack(30);
}

FragTrap &FragTrap::operator=(FragTrap const &frag)
{
	this->name = frag.name;
	this->AttackDamage = frag.AttackDamage;
	this->EnergyPoints = frag.EnergyPoints;
	this->HealthPoints = frag.HealthPoints;
	std::cout << "assignment operator used on frag" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
}

void FragTrap::highFiveGuys(void)
{
	std::cout << "Come on guys give a high five!!!!" << std::endl;
}

void FragTrap::attack(std::string target)
{
	std::cout << this->getName() << " frag attacked " << target << std::endl;
}

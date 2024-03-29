#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "default constructor called" << std::endl;
	this->name = "";
	this->AttackDamage = 0;
	this->HealthPoints = 10;
	this->EnergyPoints = 10;
}
ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	HealthPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;

	std::cout << this->getName() << " was created using string parameter constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
	*this = clap;
	std::cout << this->getName() << " was created using copy constructor" << std::endl;
}
ClapTrap	&ClapTrap::operator=(ClapTrap const &clap)
{
	this->name = clap.name;
	this->AttackDamage = clap.AttackDamage;
	this->EnergyPoints = clap.EnergyPoints;
	this->HealthPoints = clap.HealthPoints;
	std::cout << this->getName() << " was created using assignment constructor" << std::endl;
	return (*this);

}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor called" << std::endl;
}

std::string ClapTrap::getName() const
{
	return (this->name);
}

int ClapTrap::getEnergy()
{
	return (this->EnergyPoints);
}
int ClapTrap::getHealth()
{
	return (this->HealthPoints);
}

int ClapTrap::getAttack()
{
	return (this->AttackDamage);
}

void ClapTrap::setAttack(int value)
{
	this->AttackDamage = value;
}

void ClapTrap::setEnergy(int value)
{
	this->EnergyPoints = value;
}

void ClapTrap::setHealth(int value)
{
	this->HealthPoints = value;
}

void ClapTrap::setName(std::string &name)
{
	this->name = name;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->getEnergy() <= 0)
		std::cout << this->getName() << " cannnot attack energy level is to low" << std::endl;
	else if (this->getHealth() <= 0)
		std::cout << this->getName() << " is dead thus it cannot attack" << std::endl;
	else
	{
		std::cout << this->getName() << " attcked " << target << " causing " << this->getAttack() << " points of damage" << std::endl;
		this->EnergyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHealth() <= 0)
		std::cout << "please stop it is already dead!!" << std::endl;
	else if (this->getHealth() > 0)
	{
		std::cout << this->getName() << " was attacked and received " << amount << " of damage" << std::endl;
		this->HealthPoints -= amount;
		if (getHealth() <= 0)
			std::cout << this->getName() << " is out of health" << std::endl;		
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getEnergy() <= 0)
	{
		std::cout << this->getName() << " cannnot do anything energy level is to low" << std::endl;
		return ;
	}
	else if (this->getHealth() <= 0)
	{
		std::cout << this->getName() << " is dead thus it cannot do anything" << std::endl;
		return ;
	}
	else if (this->getHealth() < 10 && this->getHealth() + (int)amount > 10)
	{
		std::cout << this->getName() << " was healed for " <<  10 - this->getHealth() << std::endl;
		this->HealthPoints += (10 - this->getHealth());
		this->EnergyPoints--;
		return ;
	}
	else
	{
		this->HealthPoints += amount;
		this->EnergyPoints--;
		std::cout << this->getName() << " was healed for " << amount << std::endl;
		return ;
	}
}
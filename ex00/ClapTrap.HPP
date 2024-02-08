#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
private:
	std::string name;
	int HealthPoints;
	int EnergyPoints;
	int	AttackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &clap);
	ClapTrap &operator=(ClapTrap const &clap);
	~ClapTrap();
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName() const;
	int getEnergy();
	int getHealth();
	int getAttack();
	void setEnergy(int);
	void setHealth(int);
	void setAttack(int);
	void setName(std::string &name);
};




#endif
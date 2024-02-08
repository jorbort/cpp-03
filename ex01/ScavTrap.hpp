#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.HPP"

class ScavTrap
{
private:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;
public:
	ScavTrap();
	ScavTrap(const ScavTrap &scav);
	~ScavTrap();
	void guardGate();
};

#endif
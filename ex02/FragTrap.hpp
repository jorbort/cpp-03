#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
	public:
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap &frag);
		FragTrap &operator=(FragTrap const &frag);
		~FragTrap();

		void attack(std::string target);
		void highFiveGuys(void);
};


#endif
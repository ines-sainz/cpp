
#pragma once

#include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		int			hitPoints;
		int			EnergyPoints;
		int			AttackDamage;

	public:
		void	beRepaired(unsigned int amount);
		void	takeDamage(unsigned int amount);
		void	attack(const std::string& target);
		ClapTrap& operator=(const ClapTrap& before);
		ClapTrap(const ClapTrap& before);
		ClapTrap(std::string name);
	    ClapTrap(void);
	    ~ClapTrap();
};



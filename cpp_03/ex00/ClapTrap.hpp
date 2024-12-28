
#pragma once

#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int	hitPoints = 10;
		int			EnergyPoints = 10;
		int			AttackDamage = 0;

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

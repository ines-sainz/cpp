#include "ScavTrap.hpp"

void	ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "Target " << target << " can't be attacked because ";
		std::cout << "ScavTrap " << this->name << " has died" << std::endl;
		return ;
	}
	if (this->EnergyPoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target;
		std::cout << ", causing " << this->AttackDamage << " points of damage!\n";
		this->EnergyPoints -= 1;
	}
	else
		std::cout << "ScavTrap " << this->name << " can't attack, not enough EnergyPoints" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap( void )
{
	std::cout << "Default ScavTrap Constructor" << std::endl;
	this->name = "";
	this->hitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}

ScavTrap::ScavTrap( std::string name )
{
	std::cout << "ScavTrap " << this->name << " Constructor" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
}
ScavTrap::~ScavTrap()
{
	std::cout << "Default ScavTrap Destructor" << std::endl;
}

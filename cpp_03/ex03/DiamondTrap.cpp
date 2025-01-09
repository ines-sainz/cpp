/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:53:23 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/09 10:53:25 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap: " << this->name << ", ClapTrap: " << ClapTrap::name << std::endl;
}

DiamondTrap::DiamondTrap( void )
{
	std::cout << "Default DiamondTrap Constructor" << std::endl;
	this->name = "";
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap( std::string name )
{
	this->name = name;
	std::cout << "DiamondTrap " << this->name << " Constructor" << std::endl;
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "Default DiamondTrap Destructor" << std::endl;
}


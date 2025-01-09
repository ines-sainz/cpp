/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:26:33 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/08 17:26:36 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->name << " ask for a high five" << std::endl;
}

FragTrap::FragTrap( void )
{
	std::cout << "Default FragTrap Constructor" << std::endl;
	this->name = "";
	this->hitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
}

FragTrap::FragTrap( std::string name )
{
	this->name = name;
	std::cout << "FragTrap " << this->name << " Constructor" << std::endl;
	this->hitPoints = 100;
	this->EnergyPoints = 100;
	this->AttackDamage = 30;
}
FragTrap::~FragTrap()
{
	std::cout << "Default FragTrap Destructor" << std::endl;
}


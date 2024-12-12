/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:50:49 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/11 15:50:52 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

void HumanB::setWeapon( Weapon& weapon )
{
	this->weapon = &weapon;
}

void HumanB:: attack( void )
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

HumanB::HumanB( std::string name )
{
	this->name = name;
	this->weapon = NULL;
	std::cout << "HumanB Constructor" << std::endl;
}

HumanB::~HumanB( void )
{
	std::cout << "HumanB Destructor" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:51:35 by isainz-r          #+#    #+#             */
/*   Updated: 2024/12/11 15:51:37 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{
private:
	std::string type;
public:
	Weapon( void );
	~Weapon( void );
	std::string& getType(void) const;
	void setType(std::string type);
};

Weapon::Weapon( void )
{
	std::cout << "Weapon ";
}

Weapon::~Weapon( void )
{
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:25:48 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/08 17:25:52 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		/* data */
	public:
		void	guardGate();
		void	attack(const std::string& target);
		ScavTrap& operator=(const ScavTrap& before);
		ScavTrap(const ScavTrap& before);
		ScavTrap( std::string name );
		ScavTrap( void );
		~ScavTrap();
};


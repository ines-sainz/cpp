
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


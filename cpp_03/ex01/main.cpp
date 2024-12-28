
#include "ClapTrap.hpp"

int main()
{
	ClapTrap	person1("Person1");
	ClapTrap	person2("Person2");

	person1.attack("someone");
	person1.takeDamage(5);
	person1.takeDamage(7);
	person1.beRepaired(3);
	person1.attack("someone");

	std::cout << "\n";

	person2.attack("someone");
	person2.beRepaired(1);
	person2.attack("someone");
	person2.beRepaired(1);
	person2.attack("someone");
	person2.beRepaired(1);
	person2.attack("someone");
	person2.beRepaired(1);
	person2.attack("someone");
	person2.beRepaired(2);
	person2.attack("otherone");
	person2.beRepaired(3);
}
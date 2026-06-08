#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cout << "\n======TEST EX00======\n\n";

	std::cout << "--CONSTRUCT--\n\n";

	std::string name_foo = "foo";
	std::string name_boo = "boo";

	FragTrap foo(name_foo);
	ScavTrap boo(name_boo);

	std::cout << "\n--ACTIONS--\n\n";

	foo.attack(name_boo);
	boo.takeDamage(4);
	boo.beRepaired(6);
	boo.attack(name_foo);
	foo.takeDamage(11);
	foo.beRepaired(10);
	foo.attack(name_boo);
	foo.takeDamage(10);

	for (int i = 0; i < 98; i++)
		foo.highFivesGuys();

	std::cout << "\n--DESTRUCTOR--\n\n";

	return (0);
}

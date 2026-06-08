#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hp = 100;
	this->ep = 50;
	this->atk = 20;

	std::cout << "ScavTrap: Default constructor called\n";
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	this->hp = 100;
	this->ep = 50;
	this->atk = 20;

	std::cout << "ScavTrap: Constructor called for " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy)
{
	std::cout << "Copy constructor called for " << cpy.name << std::endl;
	*this = cpy;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called\n";
}

void ScavTrap::attack(const std::string& target)
{
	if (this->hp == 0)
	{
		std::cout << "ScavTrap: " << this->name << " is already dead...\n";
		return;
	}

	if (this->ep == 0)
	{
		std::cout << "ScavTrap: "  << this->name << " cant attack, out of ep!\n";
		return;
	}

	std::cout << "ScavTrap: "  << this->name << " attacks " << target << ", causing " << this->atk << " points of damage!\n";
	this->ep--;
}

void ScavTrap::guardGate(void)
{
	if (this->ep == 0)
	{
		std::cout << this->name << " cant guard, out of ep!\n";
		return;
	}
	std::cout << this->name << " is gate keeping!\n";
	this->ep--;
}

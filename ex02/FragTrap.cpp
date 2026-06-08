#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->hp = 100;
	this->ep = 50;
	this->atk = 20;

	std::cout << "FragTrap: Default constructor called\n";
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	this->hp = 100;
	this->ep = 100;
	this->atk = 30;

	std::cout << "FragTrap: Constructor called for " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy)
{
	std::cout << "Copy constructor called for " << cpy.name << std::endl;
	*this = cpy;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor called\n";
}

void FragTrap::highFivesGuys(void)
{
	if (this->ep == 0)
	{
		std::cout << this->name << " cant request high five, out of ep!\n";
		return;
	}
	std::cout << this->name << " requests a positive high five!\n";
	this->ep--;
}

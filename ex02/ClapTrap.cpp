#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hp(10), ep(10), atk(0)
{
	std::cout << "ClapTrap: Default constructor called\n";
}

ClapTrap::ClapTrap(const std::string &name) : name(name) , hp(10), ep(10), atk(0)
{
	std::cout << "ClapTrap: Constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
	std::cout << "Copy constructor called for " << cpy.name << std::endl;
	*this = cpy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Destructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	std::cout << "Copy assignment operator called." << std::endl;

	if (this != &src)
	{
		this->name = src.name;
		this->hp = src.hp;
		this->ep = src.ep;
		this->atk = src.atk;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hp == 0)
	{
		std::cout << "ClapTrap: " << this->name << " is already dead...\n";
		return;
	}

	if (this->ep == 0)
	{
		std::cout << "ClapTrap: "  << this->name << " cant attack, out of ep!\n";
		return;
	}

	std::cout << "ClapTrap: "  << this->name << " attacks " << target << ", causing " << this->atk << " points of damage!\n";
	this->ep--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp == 0)
		std::cout << this->name << " is already dead...\n";
	else if (this->hp < (int)amount)
	{
		std::cout << this->name << " takes " << amount << " points of damage!\n";
		this->hp = 0;
	}
	else
	{
		std::cout << this->name << " takes " << amount << " points of damage!\n";
		this->hp = this->hp - amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp == 0)
	{
		std::cout << this->name << " is already dead...\n";
		return;
	}

	if (this->ep == 0)
	{
		std::cout << this->name << " cant repair, out of ep!\n";
		return;
	}

	std::cout << this->name << " repairs " << amount << " hp!\n";
	this->hp = this->hp + amount;
	this->ep--;
}

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &cpy);
		~ClapTrap();

		ClapTrap& operator=(const ClapTrap& src);

		void	attack(const std::string& traget);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amout);
		
	private:
		std::string name;
		int			hp;
		int			ep;
		int			atk;

};


#endif
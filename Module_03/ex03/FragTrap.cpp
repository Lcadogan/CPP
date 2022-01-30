#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;

	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	_name = name;
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;

	std::cout << "FragTrap "<< _name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other)
{
	std::cout << "FragTrap "<< _name << " copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	ClapTrap::operator=(other);
	std::cout<< "Assignement operator called" << std::endl;
	return(*this);
}

FragTrap::~FragTrap(void)
{
	std::cout<< "FragTrap destructor "<< _name << " called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " positive high fives request" << std::endl;
}


#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout<<"DiamondTrap default constructor called"<<std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
	
	std::cout<<"DiamondTrap "<< _name <<" constructor called"<<std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other): ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout<<"DiamondTrap copy constructor called"<<std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor "<< _name <<" called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
	FragTrap::operator=(other);
	std::cout<<"Assignement operator called"<<std::endl;
	return(*this);
}

void DiamondTrap::whoAmI(void) const
{
	std::cout << "DiamondTrap name is " << _name << " and ClapTrap name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::get_arg()
{
	std::cout<<"hitpoints: "<<_hitpoints<<std::endl;
	std::cout<<"energy points: "<<_energyPoints<<std::endl;
	std::cout<<"attack damage: "<<_attackDamage<<std::endl;
}

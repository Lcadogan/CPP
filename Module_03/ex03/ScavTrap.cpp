#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_energyPoints = 50;

	std::cout<< "ScavTrap default constructor called" <<std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) 
{
	_name = name;
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;

	std::cout<<"ScavTrap Constructor "<< _name << " called"<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other) 
{
	std::cout<< "ScavTrap Copy constructor called" <<std::endl;
}

ScavTrap::~ScavTrap(void) 
{
	std::cout<< "ScavTrap destructor "<< _name << " called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	ClapTrap::operator=(other);
	std::cout<< "Assignement operator called" << std::endl;
	return(*this);
}

void ScavTrap::guardGate(void)
{
	std::cout<<"ScavTrap "<< _name << " enterred in Gate keeper mode." << std::endl;
}

void ScavTrap::attack (std::string const &target)
{
	std::cout<<"ScavTrap "<<_name<<" attack "<<target<<" ,causing "<<_attackDamage<<" points of damage!"<<std::endl;
}
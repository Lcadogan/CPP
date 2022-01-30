#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("default"), _hitpoints(10), _energyPoints(10), _attackDamage(0) {

    std::cout<<"ClapTrap default constuctor called"<<std::endl;
};

ClapTrap::ClapTrap(const std::string name): _name(name),  _hitpoints(10), _energyPoints(10), _attackDamage(0) {

    std::cout<< "ClapTrap constructor " << _name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
   
    std::cout<<"Copy constructor called"<<std::endl;
    *this = other;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &other) {

    std::cout<<"Assignement operator called"<<std::endl;

    _name = other._name;
    _attackDamage = other._attackDamage;
    _energyPoints = other._energyPoints;
    _hitpoints = other._hitpoints;

    return(*this);
}

ClapTrap::~ClapTrap(void) {

    std::cout<< "ClapTrap distructor " << _name << " called" << std::endl;
}

void ClapTrap::attack(std::string const & target) {

    std::cout<<"ClapTrap "<<_name<<" attack "<<target<<" ,causing "<<_attackDamage<<" points of damage!"<<std::endl;
}

 void ClapTrap::takeDamage(unsigned int amount) {

     std::cout<<"ClapTrap "<<_name<<" has take "<<amount<<" points of damage!"<<std::endl;

     if (amount >= _energyPoints) {
         _energyPoints = 0;
         std::cout<<"ClapTrap "<< _name << " is dead"<<std::endl;
     }
     else {
         _energyPoints -= amount;
         std::cout<<"ClapTrap "<< _name << " energy points is " << _energyPoints <<std::endl;
     }
 }
 void ClapTrap::beRepaired(unsigned int amount) {

    _energyPoints += amount;
    std::cout<<"ClapTrap "<< _name <<" repaired. He got "<< amount <<" energy points"<<std::endl;
    std::cout<<"ClapTrap "<< _name <<" Energy points "<< _energyPoints <<std::endl;
    }

 unsigned int ClapTrap::getAttackDamage(void) const {

     return(_attackDamage);
 }
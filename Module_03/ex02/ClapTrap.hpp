#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {


    public:
        ClapTrap(void);
        ClapTrap(const std::string name);
        ClapTrap(const ClapTrap &other);
        ClapTrap & operator=(const ClapTrap &other);

        ~ClapTrap();

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        unsigned int  getAttackDamage(void) const;

    protected:
        std::string _name;
        int _hitpoints;
        int _energyPoints;
        int _attackDamage;

};

#endif

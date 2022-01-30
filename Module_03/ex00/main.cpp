#include "ClapTrap.hpp"

int main(void) {
    std::cout<<std::endl;
    ClapTrap Bob("Bob");
    ClapTrap Jak("Jak");
    std::cout<<std::endl;
    Jak.attack("Bob");
    std::cout<<std::endl;
    Bob.takeDamage(Jak.getAttackDamage());
    std::cout<<std::endl;
    Bob.attack("Jak");
    std::cout<<std::endl;
    Jak.takeDamage(Jak.getAttackDamage());
    std::cout<<std::endl;
    Jak.beRepaired(5);
    std::cout<<std::endl;
    Bob.beRepaired(5);
    std::cout<<std::endl;
    
    return (0);


}
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    std::cout<<std::endl;
    FragTrap Bob("Bob");
    ScavTrap Jak("Jak");

    Bob.attack("Jak");
    std::cout<<std::endl;
    Jak.takeDamage(Jak.getAttackDamage());
    std::cout<<std::endl;
    Jak.attack("Bob");
    std::cout<<std::endl;
    Bob.takeDamage(Jak.getAttackDamage());
    std::cout<<std::endl;
	Jak.guardGate();
    std::cout<<std::endl;
    Bob.highFivesGuys();
    std::cout<<std::endl;

    return (0);


}
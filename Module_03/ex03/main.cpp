#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    std::cout<<std::endl;
	DiamondTrap Tom("Tom");
    std::cout<<std::endl;
	Tom.whoAmI();
    std::cout<<std::endl;
	DiamondTrap Jak("Jak");
	std::cout<<std::endl;
	Jak.whoAmI();
	std::cout<<std::endl;
	Jak.highFivesGuys();
    std::cout<<std::endl;
	Tom.attack("Jak");
	Jak.takeDamage(Tom.getAttackDamage());
    std::cout<<std::endl;
	Tom.guardGate();
    std::cout<<std::endl;
	Tom.get_arg();
    return (0);


}
#include "ScavTrap.hpp"
#include "FrapTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    ClapTrap pike("Ragnar");
    ScavTrap fither("Lion");
    FrapTrap trap("Almeida");
    DiamondTrap diamond("Ricardo");

    pike.attack("wolf");
    pike.attack("wolf");
    pike.attack("wolf");
    pike.attack("wolf");
    pike.attack("wolf");
    pike.attack("wolf");
    pike.attack("wolf");
    pike.attack("wolf");
    pike.attack("wolf");
    pike.attack("wolf");
    pike.attack("wolf");
    pike.attack("wolf");
    pike.takeDamage(8);
    pike.beRepaired(2);

    fither.attack("wolf");
    fither.attack("wolf");
    fither.attack("wolf");
    fither.attack("wolf");
    fither.attack("wolf");
    fither.attack("wolf");
    fither.attack("wolf");
    fither.attack("wolf");
    fither.attack("wolf");
    fither.attack("wolf");
    fither.attack("wolf");
    fither.attack("wolf");
    fither.takeDamage(8);
    fither.beRepaired(2);
    fither.guardGate();

    trap.attack("dragon");
    trap.attack("dragon");
    trap.attack("dragon");
    trap.attack("dragon");
    trap.attack("dragon");
    trap.attack("dragon");
    trap.attack("dragon");
    trap.attack("dragon");
    trap.attack("dragon");
    trap.attack("dragon");
    trap.attack("dragon");
    trap.attack("dragon");
    trap.takeDamage(8);
    trap.beRepaired(2);
    trap.highFivesGuys();

    diamond.attack("dragon");
    diamond.attack("dragon");
    diamond.attack("dragon");
    diamond.attack("dragon");
    diamond.attack("dragon");
    diamond.attack("dragon");
    diamond.attack("dragon");
    diamond.attack("dragon");
    diamond.attack("dragon");
    diamond.attack("dragon");
    diamond.attack("dragon");
    diamond.attack("dragon");
    diamond.takeDamage(12);
    diamond.beRepaired(2);
    diamond.highFivesGuys();
    diamond.guardGate();
    diamond.whoAmI();
}
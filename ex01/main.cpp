#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap pike("Ragnar");
    ScavTrap fither("Lion");

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
}
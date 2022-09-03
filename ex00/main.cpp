#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap pike("Ragnar");

    pike.attack("wolf");
    pike.takeDamage(8);
    pike.beRepaired(2);
}
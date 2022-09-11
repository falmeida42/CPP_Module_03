#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{   
    public:
        ScavTrap();
        ScavTrap(std::string const name);
        ScavTrap(ScavTrap const &copy);
        ScavTrap    &operator=(ScavTrap const &copy);
        void    guardGate();
        void    attack(const std::string& target) override;
        ~ScavTrap() override;
};

#endif
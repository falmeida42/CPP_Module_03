#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{   
    public:
        ScavTrap(std::string const name);
        void    guardGate();
        void    attack(const std::string& target) override;
        ~ScavTrap() override;
};

#endif
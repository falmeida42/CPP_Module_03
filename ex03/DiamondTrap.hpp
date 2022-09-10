#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FrapTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FrapTrap, public ScavTrap
{
private:
    /* data */
public:
    DiamondTrap(std::string const name);
    void    attack(const std::string& target);
    void    whoAmI();
    ~DiamondTrap() override; 
};


#endif
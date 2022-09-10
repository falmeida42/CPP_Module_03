#ifndef FRAPTRAP_HPP
#define FRAPTRAP_HPP
#include "ClapTrap.hpp"

class FrapTrap : virtual public ClapTrap
{   
    public:
        FrapTrap(std::string const name);
        void    highFivesGuys();
        void    attack(const std::string& target);
        ~FrapTrap() override;
};

#endif
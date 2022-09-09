#ifndef FRAPTRAP_HPP
#define FRAPTRAP_HPP
#include "ClapTrap.hpp"

class FrapTrap : public ClapTrap
{   
    public:
        FrapTrap(std::string const name);
        void    highFivesGuys();
        void    attack(const std::string& target) override;
        ~FrapTrap() override;
};

#endif
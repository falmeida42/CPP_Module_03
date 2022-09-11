#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string const name);
        FragTrap(FragTrap const &copy);
        FragTrap    &operator=(FragTrap const &copy);
        void    highFivesGuys();
        void    attack(const std::string& target) override;
        ~FragTrap() override;
};

#endif
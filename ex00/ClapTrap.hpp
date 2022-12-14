#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
private:
    std::string name;
    int         hitPoints = 10;
    int         energyPoints = 10;
    int         attackDamage = 0;
    bool        checkAction();
public:
    ClapTrap();
    ClapTrap(std::string const name);
    ClapTrap(ClapTrap const &copy);
    ClapTrap    &operator=(ClapTrap const &copy);
    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    ~ClapTrap();
};

#endif
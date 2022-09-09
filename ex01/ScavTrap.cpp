#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) {
    this->name = name;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " was created" << std::endl;
}

void    ScavTrap::attack(const std::string& target) {
    if (checkAction()) {
        energyPoints--;
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << name << " Don't have enough energy points to attack "<< target << std::endl;
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in guard gate mode" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " was destroyed" << std::endl;
}
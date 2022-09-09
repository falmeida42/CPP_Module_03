#include "FrapTrap.hpp"

FrapTrap::FrapTrap(std::string name) {
    this->name = name;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FrapTrap " << name << " was created" << std::endl;
}

void    FrapTrap::attack(const std::string& target) {
    if (checkAction()) {
        energyPoints--;
        std::cout << "FrapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "FrapTrap " << name << " Don't have enough energy points to attack "<< target << std::endl;
}

void    FrapTrap::highFivesGuys() {
    std::cout << "FrapTrap " << name << " is now in high five guys mode" << std::endl;
}

FrapTrap::~FrapTrap() {
    std::cout << "FrapTrap " << name << " was destroyed" << std::endl;
}
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) {
    this->name = name;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " was created" << std::endl;
}

void    FragTrap::attack(const std::string& target) {
    if (checkAction()) {
        energyPoints--;
        std::cout << "FragTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << "FragTrap " << name << " Don't have enough energy points to attack "<< target << std::endl;
}

void    FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " is now in high five guys mode" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " was destroyed" << std::endl;
}
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string const name) : FrapTrap(name), ScavTrap(name) {
    this->name = name;
    this->hitPoints = FrapTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FrapTrap::attackDamage;
    std::cout << "DiamondTrap " << name << " born" << std::endl;
}

void    DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI() {
    std::cout << "I am " << name << " " << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " was destroyed" << std::endl;
}
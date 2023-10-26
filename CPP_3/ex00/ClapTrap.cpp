//
// Created by Samuel Nocita on 9/27/23.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    this->_hit_points = 10;
    this->_energy_points = 10;
    this->_attack_damage = 10;
    std::cout << "Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name) {
    this->_hit_points = 10;
    this->_energy_points = 10;
    this->_attack_damage = 10;
    std::cout << "Constructor Called: name set to " << this->_name << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor Called" << std::endl;
}

std::string ClapTrap::get_name() {
    return (this->_name);
}

void ClapTrap::attack(const std::string& target) {
    if ((this->_hit_points > 1) && (this->_attack_damage > 1)) {
        this->_energy_points--;
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage" << std::endl;
    } else
        std::cout << "ClapTrap " << this->_name << " does not have enough points to perform an attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << this->_name << " received damage losing " << amount << " health points" << std::endl;
    this->_energy_points = this->_attack_damage - this->_energy_points;
    if (_energy_points < 1)
        std::cout << "ClapTrap " << this->_name << " has no more energy points" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount) {
    this->_energy_points--;
    if ((this->_hit_points > 1) && (this->_attack_damage > 1) && (this->_energy_points > 1))
        std::cout << "ClapTrap " << this->_name << " repair itself and received " << amount << " of hit points back" << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " does not have enough points to repair itself" << std::endl;
}

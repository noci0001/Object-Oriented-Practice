//
// Created by Samuel Nocita on 9/27/23.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    set_hit_points(100);
    set_energy_points(50);
    set_attack_damage(20);
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    set_hit_points(100);
    set_energy_points(50);
    set_attack_damage(20);
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& original) : ClapTrap() {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    this->_name = original.get_name();
    this->_hit_points = original.get_hit_points();
    this->_energy_points = original.get_energy_points();
    this->_attack_damage = original.get_attack_damage();
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& original) {
    if (this == &original)
        return (*this);
    this->set_name(original.get_name());
//    this->_name = original._name;
    this->set_hit_points(original.get_hit_points());
//    this->_hit_points = original._hit_points;
//    this->_energy_points = original._energy_points;
    this->set_energy_points(original.get_energy_points());
//    this->_attack_damage = original._attack_damage;
    this->set_attack_damage(original.get_attack_damage());
    return (*this);
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor called" << std::endl;
}

void	ScavTrap::guardGate(void) {
    if (get_hit_points() > 1)
        std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
    else
        std::cout << "ScavTrap is has no health left to be to Gatekeep" << std::endl;
}

void	ScavTrap::attack( const std::string& target) {
    if (get_energy_points() <= 0) {
        std::cout << "ScavTrap " << get_name() << " has no EP and can't attack!" << std::endl;
        return ;
    }
    else if (get_hit_points() <= 0) {
        std::cout << "ScavTrap " << get_name() << " has no HP - dead Traps don't fight no more." << std::endl;
    }
    else {
        std::cout << "ScavTrap " << get_name() << " attacks " << target << ", causing up to " << get_attack_damage() << " points of damage!" << std::endl;
        set_energy_points(get_energy_points() - 1);
    }
}

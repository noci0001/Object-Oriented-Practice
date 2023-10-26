//
// Created by Samuel Nocita on 9/27/23.
//

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    set_hit_points(100);
    set_energy_points(100);
    set_attack_damage(30);
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    set_hit_points(100);
    set_energy_points(100);
    set_attack_damage(30);
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& original) : ClapTrap() {
    std::cout << "FragTrap copy constructor called" << std::endl;
    this->_name = original.get_name();
    this->_hit_points = original.get_hit_points();
    this->_energy_points = original.get_energy_points();
    this->_attack_damage = original.get_attack_damage();
}

FragTrap&	FragTrap::operator=(const FragTrap& original) {
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

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << get_name() << " wants to high five you!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap Destructor called" << std::endl;
}

void	FragTrap::guardGate(void) {
    if (get_hit_points() > 1)
        std::cout << "FragTrap is now in Gate keeper mode" << std::endl;
    else
        std::cout << "FragTrap is has no health left to be to Gatekeep" << std::endl;
}

void	FragTrap::attack( const std::string& target) {
    if (get_energy_points() <= 0) {
        std::cout << "FragTrap " << get_name() << " has no EP and can't attack!" << std::endl;
        return ;
    }
    else if (get_hit_points() <= 0) {
        std::cout << "FragTrap " << get_name() << " has no HP - dead Traps don't fight no more." << std::endl;
    }
    else {
        std::cout << "FragTrap " << get_name() << " attacks " << target << ", causing up to " << get_attack_damage() << " points of damage!" << std::endl;
        set_energy_points(get_energy_points() - 1);
    }
}

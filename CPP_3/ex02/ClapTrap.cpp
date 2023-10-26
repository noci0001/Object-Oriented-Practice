//
// Created by Samuel Nocita on 9/27/23.
//

#include "ClapTrap.hpp"

void ClapTrap::set_name(std::string name) {
    this->_name = name;
}

void ClapTrap::set_hit_points(int amount) {
    this->_hit_points = amount;
}

void ClapTrap::set_energy_points(int amount) {
    this->_hit_points = amount;
}

void ClapTrap::set_attack_damage(int amount) {
    this->_attack_damage = amount;
}

ClapTrap::ClapTrap(): _name("defaultname"), _hit_points(10), _energy_points(10), _attack_damage(0) {
    std::cout << "Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other.get_name()) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    this->_hit_points = other.get_hit_points();
    this->_energy_points = other.get_energy_points();
    this->_attack_damage = other.get_attack_damage();
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other) {
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "Default Destructor Called" << std::endl;
}

std::string ClapTrap::get_name() const {
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
    std::cout << "ClapTrap " << this->_name << " took a hit with "
              << amount << " attack points. " << std::endl;
    if (this->_hit_points == 0) {
        std::cout << "ClapTrap " << this->_name <<
                  " is already k.o., but - no damage taken. (0 HP)" << std::endl;
        return ;
    }
    if (this->_hit_points <= amount) {
        this->_hit_points = 0;
        std::cout << "ClapTrap " << this->_name <<
                  " is in a better place :(. (0 HP)" << std::endl;
        return ;
    }
    this->_hit_points -= amount;
    std::cout << "ClapTrap " << this->_name << " took " << amount << " damage and has "
              << this->_hit_points << " HP left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hit_points == 0)
        std::cout << "ClapTrap " << this->_name <<
                  " is already k.o. - can't repair itself. (0 HP)" << std::endl;
    else if (this->_energy_points == 0) {
        std::cout << "ClapTrap " << this->_name <<
                  " is exhausted - can't repair itself (0 EP)" << std::endl;
    }
    else {
        this->_energy_points -= 1;
        if (this->_hit_points + amount > 100)
            this->_hit_points = 100;
        else
            this->_hit_points += amount;
        std::cout << "ClapTrap " << this->_name << " repairs up to " << amount
                  << " HP. Back to a total of " << this->_hit_points << " HP." << std::endl;
        return ;
    }
}

unsigned int	ClapTrap::get_hit_points() const {
    return (this->_hit_points);
}

unsigned int	ClapTrap::get_energy_points() const {
    return (this->_energy_points);
}

unsigned int	ClapTrap::get_attack_damage() const {
    return (this->_attack_damage);
}

//
// Created by Samuel Nocita on 9/27/23.
//
#include <iostream>

#ifndef C_PLUS_PLUS_CLAPTRAP_HPP
#define C_PLUS_PLUS_CLAPTRAP_HPP


class ClapTrap {
private:
    std::string _name;
    int _hit_points;
    int _energy_points;
    int _attack_damage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    std::string get_name();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


#endif //C_PLUS_PLUS_CLAPTRAP_HPP

//
// Created by Samuel Nocita on 9/27/23.
//
#include <iostream>

#ifndef C_PLUS_PLUS_CLAPTRAP_HPP
#define C_PLUS_PLUS_CLAPTRAP_HPP


class ClapTrap {
protected:
    std::string _name;
    unsigned int _hit_points;
    unsigned int _energy_points;
    unsigned int _attack_damage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string get_name() const;
    unsigned int	get_hit_points() const;
    unsigned int	get_energy_points() const;
    unsigned int	get_attack_damage() const;
    void set_name(std::string name);
    void set_hit_points(int amount);
    void set_energy_points(int amount);
    void set_attack_damage(int amount);
};


#endif //C_PLUS_PLUS_CLAPTRAP_HPP

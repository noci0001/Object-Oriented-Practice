//
// Created by Samuel Nocita on 8/28/23.
//

#include "./Weapon.hpp"

#ifndef C_PLUS_PLUS_HUMANB_HPP
#define C_PLUS_PLUS_HUMANB_HPP


class HumanB {
private:
    std::string _name;
    Weapon _weapon;
public:
    HumanB();
    ~HumanB();
    HumanB(const std::string& name);
    HumanB(const std::string& name, Weapon& weapon);
    std::string getName();
    void setWeapon(Weapon weapon);
    Weapon getWeapon();
    void attack();
};


#endif //C_PLUS_PLUS_HUMANB_HPP

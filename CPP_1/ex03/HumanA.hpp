//
// Created by Samuel Nocita on 8/28/23.
//

#include "./Weapon.hpp"

#ifndef C_PLUS_PLUS_HUMANA_HPP
#define C_PLUS_PLUS_HUMANA_HPP


class HumanA {
private:
    std::string _name;
    Weapon _weapon;
public:
    HumanA();
    ~HumanA();
    HumanA(const std::string& name, Weapon weapon);
    std::string getName();
    std::string getWeapon();
    void attack();
};


#endif //C_PLUS_PLUS_HUMANA_HPP

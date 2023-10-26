//
// Created by Samuel Nocita on 8/28/23.
//

#include <iostream>

#ifndef C_PLUS_PLUS_WEAPON_HPP
#define C_PLUS_PLUS_WEAPON_HPP

class Weapon {
private:
    std::string _type;
public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    std::string getType();
    void setType(std::string newType);
};

#endif //C_PLUS_PLUS_WEAPON_HPP

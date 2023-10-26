//
// Created by Samuel Nocita on 8/28/23.
//

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::~Weapon() {}

Weapon::Weapon(std::string type) {
    Weapon::_type = type;
}

std::string Weapon::getType() {
    return (Weapon::_type);
}

void Weapon::setType(std::string newType) {
    Weapon::_type = newType;
}

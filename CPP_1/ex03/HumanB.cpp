//
// Created by Samuel Nocita on 8/28/23.
//

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB() {}

HumanB::HumanB(const std::string& name) {
    HumanB::_name = name;
}

HumanB::HumanB(const std::string& name, Weapon& weapon) {
    HumanB::_weapon = weapon.getType();
    HumanB::_name = name;
}

HumanB::~HumanB() {}

std::string HumanB::getName() {
    return (HumanB::_name);
}

void HumanB::setWeapon(Weapon weapon) {
    HumanB::_weapon = weapon.getType();
}

Weapon HumanB::getWeapon() {
    return (HumanB::_weapon);
}

void HumanB::attack() {
    std::cout << HumanB::getName() << " attacks with their " << HumanB::getWeapon().getType() << std::endl;
}

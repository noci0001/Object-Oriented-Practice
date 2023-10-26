//
// Created by Samuel Nocita on 8/28/23.
//

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA() {}

HumanA::~HumanA() {}

HumanA::HumanA(const std::string& name, Weapon weapon) {
    HumanA::_weapon = weapon.getType();
    HumanA::_name = name;
}

std::string HumanA::getName() {
    return (HumanA::_name);
}

std::string HumanA::getWeapon() {
    return (HumanA::_weapon).getType();
}

void HumanA::attack() {
    std::cout << HumanA::getName() << " attacks with their " << HumanA::getWeapon() << std::endl;
}

//
// Created by Samuel Nocita on 8/28/23.
//

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {
    if (Zombie::_name.empty())
        std::cout << "Zombie machine has been destroyed!" << std::endl;
    else
        std::cout << "Zombie " + Zombie::_name + " has been destroyed!" << std::endl;
}

Zombie::Zombie(const std::string &name) {
    this->_name = name;
}

std::string Zombie::getName() {
    return (this->_name);
}

void Zombie::setName(const std::string &name) {
    this->_name = name;
}

void Zombie::announce() {
    std::cout << getName();
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie( const std::string name ) {
    Zombie* newZombie = new Zombie(name);
    return (newZombie);
}

void Zombie::randomChump( const std::string name ) {
    this->setName(name);
    Zombie::announce();
}

Zombie* Zombie::zombieHorde( int N, std::string name ) {
    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; ++i) {
        horde[i] = Zombie(name);
    }
    std::cout << "A horde of horrifying " << (N - '0') << " zombies called " << name << " has been created!" << std::endl;
    return (horde);
}

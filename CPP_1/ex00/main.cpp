#include "Zombie.hpp"

int main() {
    Zombie zombieCreator;
    Zombie* zombiePtr = zombieCreator.newZombie("Roberto");
    zombiePtr->announce();
    delete (zombiePtr);
    return (0);
}

#include "./ClapTrap.hpp"

int main( void ) {
    ClapTrap clappy("Clappy");
    ClapTrap ernesto("Ernesto");
    clappy.attack(ernesto.get_name());
    ernesto.takeDamage(10);
    ernesto.beRepaired(10);
    return 0;
}

#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"
#include <iostream>

int	main(void) {

    std::cout << "!!!----- constructors and assignment operator -----!!!" << std::endl << std::endl;
    FragTrap	Kim_john_un("Kim John Un");
    FragTrap	Obama("Obama");
    FragTrap	Noname;

    std::cout << std::endl << "!!!----- initialisation and member fcts -----!!!" << std::endl << std::endl;

    std::cout << "Stats Kim John Un" << std::endl;
    std::cout << "Name: " << Kim_john_un.get_name() << " | HP: " << Kim_john_un.get_hit_points() << " | EP: "
              << Kim_john_un.get_energy_points() << " | AD: " << Kim_john_un.get_attack_damage() << std::endl;

    std::cout << "Stats Obama" << std::endl;
    std::cout << "Name: " << Obama.get_name() << " | HP: " << Obama.get_hit_points() << " | EP: "
              << Obama.get_energy_points() << " | AD: " << Obama.get_attack_damage() << std::endl;

    std::cout << std::endl << "!!!-----test fight -----!!!" << std::endl << std::endl;

    for (int i = 0; i < 5; i++) {
        Obama.attack("Kim John Un");
        Kim_john_un.takeDamage(Kim_john_un.get_attack_damage());
        std::cout << std::endl;
    }

    Kim_john_un.beRepaired(3);
    Obama.beRepaired(3);
    Obama.highFivesGuys();

    std::cout << std::endl << "!!!-----test fight end -----!!!" << std::endl << std::endl;

    return 0;
}

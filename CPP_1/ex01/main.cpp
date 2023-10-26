#include "Zombie.hpp"

int main() {
    const std::string zName = "Roberto";
    int N = 10;
	Zombie* zombieHorde = Zombie::zombieHorde(N, zName);

    for (int i = 0; i < N; ++i) {
        zombieHorde[i].announce();
    }

    delete[] zombieHorde;
	return (0);
}

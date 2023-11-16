#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "Animal.hpp"

int main() {

    std::cout << std::endl << "!!!!-----CORRECT IMPLEMENTATION-----!!!!"<< std::endl;
    std::cout << std::endl <<"!!!!-----constructors-----!!!!" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl << "!!!!-----assignments / types-----!!!!" << std::endl;
    std::cout << "j " << j->getType() << " " << std::endl;
    std::cout << "i " << i->getType() << " " << std::endl;

    std::cout << std::endl << "!!!!-----polymorphism check/ virtual member fct-----!!!!" << std::endl;
    j->makeSound();
    i->makeSound();
    meta->makeSound();

    std::cout << std::endl << "!!!!-----destructors-----!!!!" << std::endl;
    delete meta;
    delete j;
    delete i;

    std::cout << std::endl << "!!!!-----BAD IMPLEMENTATION-----!!!!" << std::endl;
    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* k = new WrongDog();

    std::cout << std::endl << "!!!!-----assignment / type-----!!!!" << std::endl;
    std::cout << "k " << k->getType() << " " << std::endl;

    std::cout << std::endl << "!!!!-----polymorphism check/" <<
                                                                 "NON!-virtual member fct-----!!!!" << std::endl;
    k->makeSound();
    meta2->makeSound();

    std::cout << std::endl <<"!!!!-----destructors-----!!!!" << std::endl;
    delete meta2;
    delete k;

    return (0);
}

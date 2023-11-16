#include "./WrongAnimal.hpp"

#ifndef C_PLUS_PLUS_WRONGDOG_HPP
#define C_PLUS_PLUS_WRONGDOG_HPP


WrongDog::WrongDog() {
    std::cout << "WrongCat constructor called." << std::endl;
    this->_type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog& original) : WrongAnimal() {
    std::cout << "WrongCat copy constructor called." << std::endl;
    this->_type = original._type;
}

WrongDog&	WrongDog::operator=(const WrongDog& original) {
    std::cout << "WrongCat assignment operator overload called." << std::endl;
    if (this == &original)
        return (*this);
    this->_type = original._type;
    return (*this);
}

WrongDog::~WrongDog() {
    std::cout << "WrongCat destructor called." << std::endl;
}

void	WrongDog::makeSound() const {
    std::cout << "Bark Bark!" << std::endl;
}


#endif //C_PLUS_PLUS_WRONGDOG_HPP

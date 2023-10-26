//
// Created by Samuel Nocita on 10/26/23.
//

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& original) {
    std::cout << "WrongAnimal copy constructor called." << std::endl;
    this->_type = original._type;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& original) {
    std::cout << "WrongAnimal assignment operator overload called." << std::endl;
    if (this == &original)
        return (*this);
    this->_type = original._type;
    return (*this);
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called." << std::endl;
}

void	WrongAnimal::makeSound() const {
    std::cout << "Random WrongAnimal noises..." << std::endl;
}

std::string	WrongAnimal::getType() const {
    return("Object type: " + this->_type);
}

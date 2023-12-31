#include "Dog.hpp"
#include "Brain.hpp"

void Dog::makeSound() const {
    std::cout << "*Bark Bark" << std::endl;
}

std::string Dog::getType()
{
    return (this->_type);
}

Dog::Dog(): Animal(), brain(new Brain())
{
    std::cout << "Dog Class constructor called!" << std::endl;
    for (int i = 0; i < 100; i++){
		this->brain->ideas[i] = "Dog likes you";
	}
    this->_type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog Class destructor called!" << std::endl;
    delete this->brain;
}

Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignment operator overload called." << std::endl;
    if (this == &other)
        return (*this);
    this->_type = other._type;
    *this->brain = *other.brain;
    return (*this);
}

Dog::Dog(const Dog &other) : Animal(), brain(new Brain())
{
    std::cout << "Dog Class copy constructor called!" << std::endl;
    this->_type = other._type;
}

Brain& Dog::getBrain(void){
	return (*this->brain);
}

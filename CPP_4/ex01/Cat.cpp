#include "Cat.hpp"
#include "Brain.hpp"

void Cat::makeSound() const
{
    std::cout << "Meowwwww" << std::endl;
}

Cat::Cat(): Animal(), brain(new Brain())
{
    std::cout << "Cat Class constructor called!" << std::endl;
    for (int i = 0; i < 100; i++){
		this->brain->ideas[i] = "🐱Cat likes 🐟";
	}
    this->_type = "Cat";
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat Class destructor called!" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignment operator overload called." << std::endl;
    if (this == &other)
        return (*this);
    *this->brain = *other.brain;
    this->_type = other._type;
    return (*this);
}

Cat::Cat(const Cat &other) : Animal(), brain(new Brain())
{
    std::cout << "Cat Class copy constructor called!" << std::endl;
    this->_type = other._type;
}

Brain& Cat::getBrain(void){
	return (*this->brain);
}

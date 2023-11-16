#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

Dog::Dog(): Animal(), brain(new Brain()){
	std::cout << "🐶 has been instantiated (default constructor)." << std::endl;
	for (int i = 0; i < 100; i++){
		this->brain->ideas[i] = "🐶Dog likes 🦴";
	}
	this->type = "Dog";
}

Dog::Dog(const Dog& origin): Animal(), brain(new Brain()){
	std::cout << "🐶 has been copied (copy constructor)." << std::endl;
	*this = origin;
}

Dog& Dog::operator=(const Dog& origin){
	std::cout << "🐶 has been copied (copy assingment)." << std::endl;
	*this->brain = *origin.brain;
	this->type = origin.type;
	return (*this);
}

Dog::~Dog(){
	std::cout << "🐶💀 has been deleted (default constructor)." << std::endl;
	delete this->brain;
}

void Dog::makeSound() const{
	std::cout << "🐶 << BARK!! BARK!!" << std::endl;
}

Brain& Dog::getBrain(void){
	return (*this->brain);
}

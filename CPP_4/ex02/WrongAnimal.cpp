#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

WrongAnimal::WrongAnimal(): type("Polymorph"){
	std::cout << "🐖 WrongAnimal has been instantiated. (default constructor)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& origin){
	std::cout << "🐖 WrongAnimal has been copied. (copy constructor)" << std::endl;
	*this = origin;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &origin){
	std::cout << "🐖 WrongAnimal has been copied. (copy assignment)" << std::endl;
	this->type = origin.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(){
	std::cout << "🐖💀 WrongAnimal has been deleted. (default destructor)" << std::endl;
}

void WrongAnimal::makeSound() const{
	std::cout << "🐖" << this->type << " WrongAnimal is trying to make sound." << std::endl;
}

const std::string& WrongAnimal::getType(void) const{
	return (this->type);
}

#include "WrongCat.hpp"
#include <iostream>
#include <string>


WrongCat::WrongCat(): WrongAnimal(){
	this->type = "WrongCat";
	std::cout << "🐱 has been instantiated (default constructor)." << std::endl;
}

WrongCat::WrongCat(const WrongCat& origin): WrongAnimal(){
	*this = origin;
	std::cout << "🐱 has been copied (copy constructor)." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& origin){
	std::cout << "🐱 has been copied (copy assingment)." << std::endl;
	this->type = origin.type;
	return (*this);
}

WrongCat::~WrongCat(){
	std::cout << "🐱💀 has been deleted (default constructor)." << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "🐱 << Meow... Meow..." << std::endl;
}

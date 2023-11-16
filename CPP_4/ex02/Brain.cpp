#include "Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain(){
	std::cout << "🧠 Default constructor called." << std::endl;
}

Brain::Brain(const Brain& origin){
	std::cout << "🧠 Copy constructor called." << std::endl;
	*this = origin;
}

Brain& Brain::operator=(const Brain& origin){
	std::cout << "🧠 Copy assingment operator called." << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = origin.ideas[i];
	}
	return (*this);
}

Brain::~Brain(){
	std::cout << "🧠💀 Default destructor called." << std::endl;
}

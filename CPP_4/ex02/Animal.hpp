#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal& origin);
	Animal& operator=(const Animal &origin);
	virtual ~Animal();
	virtual void makeSound() const = 0;
	const std::string& getType(void) const;
};

#endif

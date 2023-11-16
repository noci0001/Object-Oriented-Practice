#ifndef	DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* brain;
public:
	Dog();
	Dog(const Dog& origin);
	Dog& operator=(const Dog& origin);
	virtual ~Dog();
	virtual void makeSound() const;
	Brain& getBrain(void);
};

#endif

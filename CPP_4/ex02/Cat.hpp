#ifndef	CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* brain;
public:
	Cat();
	Cat(const Cat& origin);
	Cat& operator=(const Cat& origin);
	virtual ~Cat();
	virtual void makeSound() const;
	Brain& getBrain(void);
};

#endif

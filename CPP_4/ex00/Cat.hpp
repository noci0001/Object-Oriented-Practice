#include "Animal.hpp"

#ifndef	CAT_HPP
# define CAT_HPP

class Cat : public Animal
{
private:

public:
    Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
    ~Cat();
    void makeSound() const;
};

#endif

//
// Created by Samuel Nocita on 10/26/23.
//

#include "WrongAnimal.hpp"
#include <string>

#ifndef	WRONGDOG_HPP
# define WRONGDOG_HPP

class WrongDog : public WrongAnimal{
private:

public:
    WrongDog();
    WrongDog(const WrongDog& original);
    WrongDog&	operator=(const WrongDog& original);
    ~WrongDog();

    void	makeSound() const;
};

#endif

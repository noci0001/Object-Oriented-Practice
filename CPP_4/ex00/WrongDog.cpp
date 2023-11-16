//
// Created by Samuel Nocita on 10/26/23.
//

#include "WrongAnimal.hpp"
#include <string>

#ifndef	WRONGDOG_HPP
# define WRONGDOG_HPP

class WrongCat : public WrongAnimal{
private:

public:
    WrongCat();
    WrongCat(const WrongCat& original);
    WrongCat&	operator=(const WrongCat& original);
    ~WrongCat();

    void	makeSound() const;
};

#endif

#ifndef C_PLUS_PLUS_WRONGANIMAL_HPP
#define C_PLUS_PLUS_WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal {
protected:
    std::string		_type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& original);
    WrongAnimal&	operator=(const WrongAnimal& original);
    ~WrongAnimal();
    void		makeSound() const; // purposely wrong implementation!!
    std::string	getType() const;
};

#endif

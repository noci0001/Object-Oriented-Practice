#ifndef	WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& origin);
	WrongCat& operator=(const WrongCat& origin);
	~WrongCat();
	void makeSound() const;
};

#endif

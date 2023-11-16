#ifndef	WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP
#include <string>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& origin);
	WrongAnimal& operator=(const WrongAnimal &origin);
	~WrongAnimal();
	void makeSound() const;
	const std::string& getType(void) const;
};

#endif

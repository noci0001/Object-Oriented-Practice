#ifndef	BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
public:
	std::string ideas[100];
	Brain();
	Brain(const Brain& origin);
	Brain& operator=(const Brain& origin);
	~Brain();
};

#endif

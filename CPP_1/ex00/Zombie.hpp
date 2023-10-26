//
// Created by Samuel Nocita on 8/28/23.
//

#ifndef C_PLUS_PLUS_ZOMBIE_HPP
#define C_PLUS_PLUS_ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
    std::string _name;
public:
    Zombie();
    ~Zombie();
    Zombie(const std::string& name);
    std::string getName();
    void setName(const std::string &name);
    Zombie* newZombie(const std::string name );
    void randomChump(const std::string name );
    void announce( void );
};


#endif //C_PLUS_PLUS_ZOMBIE_HPP

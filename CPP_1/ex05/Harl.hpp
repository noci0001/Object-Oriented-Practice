//
// Created by Samuel Nocita on 8/29/23.
//

#ifndef C_PLUS_PLUS_HARL_HPP
#define C_PLUS_PLUS_HARL_HPP

#include <string>
#include <iostream>

#define RED "\033[1;31m"
#define PURPLE "\033[1;35m"
#define YELLOW "\033[1;33m"
#define GREEN "\033[1;32m"
#define BLUE "\033[1;34m"
#define RESET "\033[0m"

class Harl {
private:
    void _debug( void );
    void _info( void );
    void _warning( void );
    void _error( void );
public:
    Harl();
    ~Harl();
    void complain( std::string level);
};


#endif //C_PLUS_PLUS_HARL_HPP

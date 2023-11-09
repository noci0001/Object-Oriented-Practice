#include <iostream>
#include "./Fixed.hpp"

int main( void ) {

    //Default constructor
    Fixed a;
    //Copy constructor
    Fixed b( a );

    Fixed c;

    //Copy assignment operator by operator overloading
    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    return 0;
}

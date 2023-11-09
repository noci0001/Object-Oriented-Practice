//
// Created by Samuel Nocita on 8/29/23.
//

#ifndef C_PLUS_PLUS_FIXED_HPP
#define C_PLUS_PLUS_FIXED_HPP

#include <iostream>

class Fixed {
private:
    int _val;
    static const int _bits;
public:
    //Constructor
    Fixed();
    //Destructor
    ~Fixed();
    //Copy Constructor -> takes a reference to a constant Fixed Object as a parameter
    Fixed(const Fixed& other);
    Fixed operator=(const Fixed& other);
    //Accessors
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif // aC_PLUS_PLUS_FIXED_HPP

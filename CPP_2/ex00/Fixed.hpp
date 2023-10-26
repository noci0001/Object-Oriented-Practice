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
    Fixed();
    ~Fixed();
    Fixed(const Fixed& other);
    Fixed operator=(const Fixed& other);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif // aC_PLUS_PLUS_FIXED_HPP

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
    Fixed(const Fixed& other);
    Fixed(const int integerPart);
    Fixed(const float integerPart);
    ~Fixed();
    Fixed& operator=(const Fixed& other);
    float toFloat( void) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

std::ostream&	operator<<(std::ostream& ostream_obj, const Fixed& fixed);

#endif // aC_PLUS_PLUS_FIXED_HPP

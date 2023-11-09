//
// Created by Samuel Nocita on 8/29/23.
//

#ifndef C_PLUS_PLUS_FIXED_HPP
#define C_PLUS_PLUS_FIXED_HPP

#include <iostream>
#include <stdexcept>

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
    //compariso operators overloading
    Fixed& operator=(const Fixed& other);
    bool operator>(Fixed const &fixed_other);
    bool operator<(Fixed const &fixed_other);
    bool operator>=(Fixed const &fixed_other);
    bool operator<=(Fixed const &fixed_other);
    bool operator==(Fixed const &fixed_other);
    bool operator!=(Fixed const &fixed_other);
    Fixed operator*(Fixed const &fixed_other);
    Fixed operator+(Fixed const &fixed_other);
    Fixed operator-(Fixed const &fixed_other);
    Fixed operator/(Fixed const &fixed_other);
    Fixed&	operator++( void );
    Fixed operator++( int );
    Fixed& operator--( void );
    Fixed operator--( int );
    //static member functions min and max
    static Fixed&			min(Fixed& fp, Fixed& fp_2);
    static const Fixed&		min(Fixed const &fp, Fixed const &fp_2);
    static Fixed&			max(Fixed& fp, Fixed& fp_2);
    static const Fixed&		max(Fixed const &fp, Fixed const &fp_2);
    float toFloat( void) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

std::ostream&	operator<<(std::ostream& ostream_obj, const Fixed& fixed);

#endif // aC_PLUS_PLUS_FIXED_HPP

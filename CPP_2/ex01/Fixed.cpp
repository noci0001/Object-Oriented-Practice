//
// Created by Samuel Nocita on 8/29/23.
//

#include "./Fixed.hpp"
#include <iostream>
#include <ostream>
#include <cmath>

const int Fixed::_bits = 8;

//Default Constructor initializing value to 0
Fixed::Fixed(): _val(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int integerPart) {
    std::cout << "Int constructor called" << std::endl;
    setRawBits(integerPart << this->_bits);
}

//roundf find the nearest Integer to the provided floating point number.
Fixed::Fixed(const float integerPart) {
    std::cout << "Float constructor called" << std::endl;
    setRawBits(roundf(integerPart * (1 << _bits)));
}

//Destructor function
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

//Copy Assignment Operator overload
Fixed& Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->_val = other.getRawBits();
    return (*this);
}

//Overload insertion that inserts a floating-point representation of a fixed-point number into the ostream
std::ostream& operator<<(std::ostream& ostream_obj, const Fixed& fixed) {
    ostream_obj << fixed.toFloat();
    return (ostream_obj);
}

float Fixed::toFloat(void) const {
    return ((float)(this->_val) / (float)(1 << this->_bits));
}

int Fixed::toInt(void) const {
    return this->_val >> this->_bits;
}

//Member function that returns the raw value of the fixed-point value
int Fixed::getRawBits( void ) const {
    return (this->_val);
}

//Member function that sets the raw value of the fixed-point number
void Fixed::setRawBits( int const raw ) {
    Fixed::_val = raw;
}

//Copy Constructor
Fixed::Fixed(const Fixed& other) {
    _val = other.getRawBits();
    std::cout << "Copy constructor called" << std::endl;
}

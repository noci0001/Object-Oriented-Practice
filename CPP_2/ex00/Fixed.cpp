//
// Created by Samuel Nocita on 8/29/23.
//

#include "./Fixed.hpp"

const int Fixed:: _bits = 8;

//Default Constructor initializing value to 0
Fixed::Fixed(): _val(0) {
    std::cout << "Default constructor called" << std::endl;
}

//Destructor function
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

//Copy Constructor
Fixed::Fixed(const Fixed& other) {
    _val = other.getRawBits();
    std::cout << "Copy constructor called" << std::endl;
}

//Copy Assignment Operator overload
Fixed Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->_val = other.getRawBits();
    return (*this);
}

//Member function that returns the raw value of the fixed-point value
int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (Fixed::_val);
}

//Member function that sets the raw value of the fixed-point number
void Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
    Fixed::_val = raw;
}


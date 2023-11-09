//
// Created by Samuel Nocita on 8/29/23.
//

#include "./Fixed.hpp"
#include <iostream>
#include <ostream>
#include <cmath>

const int Fixed:: _bits = 8;

//Default Constructor initializing value to 0
Fixed::Fixed(): _val(0) {}

Fixed::Fixed(const int integerPart) {
    setRawBits(integerPart << this->_bits);
}

//roundf find the nearest Integer to the provided floating point number.
Fixed::Fixed(const float integerPart) {
    setRawBits(roundf(integerPart * (1 << _bits)));
}

//Destructor function
Fixed::~Fixed() {}

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
}


bool Fixed::operator>(Fixed const &fixed_other) {
    return ((this->getRawBits() > fixed_other.getRawBits()));
}

bool Fixed::operator<(Fixed const &fixed_other) {
    return ((this->getRawBits() < fixed_other.getRawBits()));
}

bool Fixed::operator>=(Fixed const &fixed_other) {
    return ((this->getRawBits() >= fixed_other.getRawBits()));
}

bool Fixed::operator<=(Fixed const &fixed_other) {
    return ((this->getRawBits() <= fixed_other.getRawBits()));
}

bool Fixed::operator!=(Fixed const &fixed_other) {
    return ((this->getRawBits() != fixed_other.getRawBits()));
}

bool Fixed::operator==(Fixed const &fixed_other) {
    return ((this->getRawBits() == fixed_other.getRawBits()));
}
//Creation and Initialization of result object on the same line
Fixed Fixed::operator*(Fixed const &fixed_other) {
    Fixed result(this->toFloat() * fixed_other.toFloat());
    return result;
}

Fixed Fixed::operator+(Fixed const &fixed_other) {
    Fixed result(this->toFloat() + fixed_other.toFloat());
    return result;
}

Fixed Fixed::operator-(Fixed const &fixed_other){
    Fixed result(this->toFloat() - fixed_other.toFloat());
    return result;
}

Fixed Fixed::operator/(Fixed const &fixed_other){
    if (fixed_other.toFloat() == 0)
        throw std::runtime_error("Division by zero exception");
    Fixed result(this->toFloat() / fixed_other.toFloat());
    return result;
}

Fixed& Fixed::operator++(void) {
    this->_val++;
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed result(*this);
    this->_val++;
    return result;
}

// Prefix decrement operator (--). decrement the value and return the modified object itself (by reference).
Fixed& Fixed::operator--(void) {
    this->_val--;
    return(*this);
}

// Postfix decrement operator (--). decrement the value and return a copy
// of the original object (by value).
Fixed Fixed::operator--(int) {
    Fixed result(*this);
    this->_val--;
    return result;
}

Fixed&	Fixed::min(Fixed& fp, Fixed& fp_2) {
    return ((Fixed(fp) < Fixed(fp_2)) ? fp : fp_2);
}

const Fixed&	Fixed::min(Fixed const &fp, Fixed const &fp_2) {
    return ((Fixed(fp) < Fixed(fp_2)) ? fp : fp_2);
}

Fixed&	Fixed::max(Fixed& fp, Fixed& fp_2) {
    return ((Fixed(fp) > Fixed(fp_2)) ? fp : fp_2);
}

const Fixed&	Fixed::max(Fixed const &fp, Fixed const &fp_2) {
    return ((Fixed(fp) > Fixed(fp_2)) ? fp : fp_2);
}

#include "Fixed.hpp"

Fixed::Fixed(void) {
	// std::cout<<"Default constructor called"<<std::endl;
	this->point_val = 0;
}

Fixed::Fixed(const int n) {
	// std::cout<<"Int constructor called"<<std::endl;
	this->point_val = n << number_bits;
}

Fixed::Fixed(const float n) {
	// std::cout<<"Float constructor called"<<std::endl;
	this->point_val = std::roundf(n * (1 << this->number_bits));
}
Fixed::Fixed(const Fixed &other) {
	// std::cout<<"Copy constructor called"<<std::endl;
	this->point_val = other.getRawBits();
}

Fixed::~Fixed() {
	// std::cout<<"Destructor called" << std::endl;
}

Fixed &Fixed::operator= (const Fixed &other) {
	// std::cout << "Assignation operator called" << std::endl;

	if (this != &other) {
		this->point_val = other.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits() const {
	// std::cout << "getRawBits member function called" << std::endl;

	return (this->point_val);
}

void Fixed::setRawBits(int const raw) {
	this->point_val = raw;
}

float Fixed::toFloat(void) const {
	return (std::roundf(this->point_val) /(1 << this->number_bits));
}

int Fixed::toInt(void) const {
	return (this->point_val >> number_bits);
}

std::ostream & operator<<(std::ostream &out, const Fixed &other) {
	out << other.toFloat();
	return (out);
}

// comparison operators:===============

bool Fixed::operator> (const Fixed &other) const {
	return (this->point_val > other.point_val);
}

bool Fixed::operator< (const Fixed &other) const {
	return (this->point_val < other.point_val);
}

bool Fixed::operator>= (const Fixed &other) const {
	return (this->point_val >= other.point_val);
}

bool Fixed::operator<= (const Fixed &other) const {
	return (this->point_val <= other.point_val);
}

bool Fixed::operator== (const Fixed &other) const {
	return (this->point_val == other.point_val);
}

bool Fixed::operator!= (const Fixed &other) const {
	return (this->point_val != other.point_val);
}

// arithmetic operators=================

Fixed Fixed::operator+ (const Fixed &other) {
	return (this->point_val + other.point_val);
}

Fixed Fixed::operator- (const Fixed &other) {
	return (this->point_val - other.point_val);
}

Fixed Fixed::operator* (const Fixed &other) {
	return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/ (const Fixed &other) {
	return (this->toFloat() / other.toFloat());
}

// increment and decrement operators ===
//prefix

Fixed & Fixed::operator++(void) {
	this->point_val++;
	return (*this);
}

Fixed & Fixed::operator--(void) {
	this->point_val--;
	return (*this);
}
//postfix
Fixed Fixed::operator++(int) {
	Fixed temp = *this;
	++*this;
	return (temp);
}

Fixed Fixed::operator--(int) {
	Fixed temp = *this;
	--*this;
	return (temp);
}

// min/max operators ====================

const Fixed & Fixed::max(Fixed const &src1, Fixed const &src2) {
	return (src1 > src2 ? src1 : src2);
}

Fixed & Fixed::max(Fixed &src1, Fixed &src2) {
	return (src1 > src2 ? src1 : src2);
}

const Fixed & Fixed::min(Fixed const &src1, Fixed const &src2) {
	return (src1 < src2 ? src1 : src2);
}

Fixed & Fixed::min(Fixed &src1, Fixed &src2) {
	return (src1 < src2 ? src1 : src2);
}
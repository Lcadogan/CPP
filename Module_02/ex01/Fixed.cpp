#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout<<"Default constructor called"<<std::endl;
	this->point_val = 0;
}

Fixed::Fixed(const int n) {
	std::cout<<"Int constructor called"<<std::endl;
	this->point_val = n << number_bits;
}

Fixed::Fixed(const float n) {
	std::cout<<"Float constructor called"<<std::endl;
	this->point_val = std::roundf(n * (1 << this->number_bits));
}
Fixed::Fixed(const Fixed &other) {
	std::cout<<"Copy constructor called"<<std::endl;
	this->point_val = other.getRawBits();
}

Fixed::~Fixed() {
	std::cout<<"Destructor called" << std::endl;
}

Fixed &Fixed::operator= (const Fixed &other) {
	std::cout << "Assignation operator called" << std::endl;

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
	return (this->point_val >> this->number_bits);
}

std::ostream & operator<<(std::ostream &out, const Fixed &other) {
	out << other.toFloat();
	return (out);
}

#include "Fixed.hpp"

Fixed::Fixed():point_val(0){
	std::cout<<"Default constructor called"<<std::endl;
}
Fixed::Fixed(const Fixed &fixed) {
	std::cout<<"Copy constructor called"<<std::endl;
	*this = fixed;
}


Fixed::~Fixed() {
	std::cout<<"Destructor called" << std::endl;
}

Fixed &Fixed::operator= (const Fixed &fixed) {
	std::cout << "Assignation operator called" << std::endl;

	if (this != &fixed) {
		this->point_val = fixed.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;

	return this->point_val;
}

void Fixed::setRawBits(int const raw) {
	this->point_val = raw;
}
#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed(void);
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed &other);
		
		~Fixed(void);
		
		Fixed &operator= (const Fixed &other);
		// comparison operators:===============
		bool operator> (const Fixed &other) const;
		bool operator< (const Fixed &other) const;
		bool operator>= (const Fixed &other) const;
		bool operator<= (const Fixed &other) const;
		bool operator== (const Fixed &other) const;
		bool operator!= (const Fixed &other) const;

		// arithmetic operators=================
		Fixed operator+ (const Fixed &other);
		Fixed operator- (const Fixed &other);
		Fixed operator* (const Fixed &other);
		Fixed operator/ (const Fixed &other);

		// increment and decrement operators ===
		Fixed &operator++(); //prefix
		Fixed &operator--(); //prefix
		Fixed operator++(int); //postfix
		Fixed operator--(int); //postfix
		
		// min/max operators ====================

		static const Fixed &max(Fixed const &src1, Fixed const &src2);
		static  Fixed &max(Fixed &src1, Fixed &src2);
		static const Fixed &min(Fixed const &src1, Fixed const &src2);
		static  Fixed &min(Fixed &src1, Fixed &src2);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat( void ) const;
		int toInt( void ) const;

	private:
		int point_val;
		static const int number_bits = 8;

};

std::ostream & operator<<(std::ostream &out, const Fixed &other);

#endif

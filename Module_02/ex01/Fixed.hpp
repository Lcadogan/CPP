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
		~Fixed();
		
		Fixed &operator=(const Fixed &other);
		
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

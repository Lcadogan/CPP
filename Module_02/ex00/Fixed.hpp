#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		~Fixed();
		
		Fixed &operator=(const Fixed &fixed);
		
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int point_val;
		static const int number_bits = 8;

};

#endif

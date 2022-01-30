#include "iter.hpp"
#define SIZE_ARR 5

// int main(void){
//     char * arr_c = createArray('a', SIZE_ARR);
//     iter(arr_c, SIZE_ARR, print);
//     std::cout << std::endl;

//     int * arr_i = createArray(1, SIZE_ARR);
//     iter(arr_i, SIZE_ARR, print);
//     std::cout << std::endl;

//     float * arr_f = createArray(1.1f, SIZE_ARR);
//     iter(arr_f, SIZE_ARR, print);
//     std::cout << std::endl;

//     double * arr_d = createArray(1.1, SIZE_ARR);
//     iter(arr_d, SIZE_ARR, print);
//     std::cout << std::endl;

//     delete arr_c;
//     delete arr_i;
//     delete arr_f;
// 	delete arr_d;
//     return 0;
// }

class Awesome
{
public:
	Awesome(void): _n(42){return;}
	int get(void)const {return this->_n;}
private:
	int _n;
};

std::ostream & operator<<(std::ostream & o, Awesome const & rhs) {o<<rhs.get(); return o;}


template <typename T>
void print(T const & x)
{
	std::cout<< x << std::endl;
	return;
}


int main() {

	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);

	return 0;
}


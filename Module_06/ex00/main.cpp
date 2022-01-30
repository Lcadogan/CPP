#include "Convert.hpp"


int main(int argc, char **argv){
    if (argc > 2) {
        std::cout << "Error: too many arguments, need 1 argument only!" << std::endl;
        return -1;
    }
    if (argc < 2 ) {
        std::cout << "Error: too few arguments, need 1 argument only!" << std::endl;
        return -1;
    }
    Convert::convertAll(argv[1]);

    return 0;
}

#include <iostream>

#include "hello.h"


void hello() {
    #ifdef NDEBUG
    // std::cout << "Hello World Release!" <<std::endl;
    #else
    //hello there
    std::cout << "Hello World Debug-conan testing!" <<std::endl;
    std::cout <<"Hi there" <<std::endl;
    #endif
}

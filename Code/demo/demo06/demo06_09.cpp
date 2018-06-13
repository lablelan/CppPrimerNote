#include "Chapter6.h"
#include <iostream>

// g++ fact.cpp factMain.cpp demo06_09.cpp -o demo06_09 -std=c++11

int main()
{
    std::cout << f() << std::endl;
    std::cout << f2(5) << std::endl;    
    std::cout << calc(2, 5) << std::endl;
    std::cout << square(2.0) << std::endl;

    return 0;
}

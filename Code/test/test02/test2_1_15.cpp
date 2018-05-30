#include <iostream>

int main()
{
    int a = 1;

    //int const *out等价于const int *out
    int * const out = &a;
    *out = 2;
    const int *out1 = &a;
    //*out1 = 2;
    std::cout << *out << *out1  << std::endl;


    return 0;
}

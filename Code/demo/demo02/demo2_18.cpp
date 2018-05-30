#include <iostream>

int main()
{
    int *a = nullptr;
    int b = 10;
    a = &b;
    std::cout << *a << std::endl;
    *a = 11;
    std::cout << b << std::endl;

    return 0;
}

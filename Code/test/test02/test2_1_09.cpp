#include <iostream>

int main()
{
    int* a = NULL;
    int* &b = a;

    std::cout << b << std::endl;
    std::cout << *b << std::endl;

    return 0;
}

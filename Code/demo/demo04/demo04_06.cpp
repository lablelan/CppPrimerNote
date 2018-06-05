#include <iostream>

int main()
{
    int i = 0;
    std::cin >> i;

    bool even = i % 2 == 0 ? true : false;

    if (even)
    {
        std::cout << "even" << std::endl;
    }
    else 
    {
        std::cout << "odd" << std::endl;
    }


    return 0;
}

#include <iostream>

int main()
{
    int a = 10, b = 9, c = 8, d = 7;
    if (a > b && b > c && c > d)
    {
        std::cout << "a > b > c > d" << std::endl;
    }

    return 0;
}

#include <iostream>

// 改变值i为i的平方

int main()
{
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;
    std::cout << i << '\n';

    return 0;
}

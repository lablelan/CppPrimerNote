#include <iostream>

// for 循环内i是for循环的局部变量

int main()
{
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
    {
        sum += i;
    }

    std::cout << i << " " << sum << std::endl;
    return 0;
}

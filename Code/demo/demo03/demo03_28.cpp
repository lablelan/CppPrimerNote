#include <iostream>

std::string sa[10];
int ia[10];

// 都默认初始化，但一些编译器不会默认初始化值，一般需要自己初始化。

int main()
{
    std::string sa2[10];
    int ia2[10];

    for (auto i : ia)
    {
        std::cout << i << std::endl;
    }
    for (auto i : ia2)
    {
        std::cout << i << std::endl;
    }
    for (auto s : sa)
    {
        std::cout << s << std::endl;
    }
    for (auto s : sa2)
    {
        std::cout << s << std::endl;
    }

    return 0;
}

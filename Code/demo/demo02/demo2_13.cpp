#include <iostream>

// 在没有指定域,默认使用块内的局部变量 

int i = 42;

int main()
{
    int i = 100;
    int j = i;

    std::cout << j << std::endl;

    j = ::i;
    std::cout << j << std::endl;

    return 0;
}

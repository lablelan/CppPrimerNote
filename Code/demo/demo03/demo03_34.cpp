#include <iostream>

int main()
{
    int a[10];

    int *p1 = a;
    int *p2 = &a[4];

    // 地址相加减结果为有符号的步长间隔
    auto length1 = p2 - p1;          // p2到p1的步长间隔,为正
    auto length2 = p1 - p2;          // p1到p2的步长间隔，为负
    
    std::cout << length1 << std::endl;
    std::cout << length2 << std::endl;

    //p1 += length1;
    p1 += length2;                  // 编译器并不会报错



    return 0;
}

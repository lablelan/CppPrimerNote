#include <iostream>

// 两个指针相加得到一个不该访问的内存空间的指针
// error: invalid operands of types ‘int*’ and ‘int*’ to binary ‘operator+’
int main()
{
    int *a;
    int *b;

    std::cout << a + b << std::endl;

    return 0;
}

#include <iostream>

int main()
{
    int x[10];
    int *p = x;
    
    std::cout << sizeof(x) / sizeof(*x) << std::endl;   // 数组长度10
    std::cout << sizeof(p) << " " << sizeof(p) / sizeof(*p) << std::endl;   // 2,64位指针的长度为8 

    return 0;
}

#include <iostream>

extern int ix = 1024;       // 定义 编译器会警告

extern int iz;              // 声明

int main()
{
    //extern int ix = 1024;     // 函数内会报错
    std::cout << ix << std::endl;
    int iy;                     // 定义
    std::cout << iy << std::endl;
    //extern int iz;            // 函数内会报错
    std::cout << iz << std::endl;

    return 0;
}

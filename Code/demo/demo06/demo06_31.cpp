#include <iostream>
//1.当返回引用是局部变量时无效
//2.当返回常量引用是局部变量时无效

const int& get1()
{
    return 1;
}

int& get2()
{
    int i = 1;

    return i;
}

int main()
{
    get1();
    get2();

    return 0;
}

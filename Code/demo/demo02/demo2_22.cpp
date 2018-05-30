#include <iostream>

// 第一个if如果p指向0地址条件为false，就是一个值判断
// 第二个if如果p指向的是一块不可访问的内存会直接报段错误，是一个正常的指针使用

int main()
{
    int *p;
    //int *p = 0;

    if (p)
    {
    }

    if (*p)
    {
    }

    return 0;
}

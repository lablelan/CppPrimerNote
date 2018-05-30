#include <iostream>
// 为什么lp非法？p合法？
// 因为p时泛型指针，他只保存内存地址，并没有明确读的步长
// 因为lp是long类型指针，而i是int类型指针，两种指针在取数据的时候步长并不一样
int main()
{
    int i = 42;
    void *p = &i;
    long *lp = &i;

    return 0;
}

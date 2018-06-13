#include <iostream>

/*
 * void f(int)形参是传参的一个副本,需要执行拷贝
 * void f(&int)非法的声明
 * void f(int &)形参使用的是传参的引用，不需要拷贝
 */

void f1(int)
{

}

void f2(&int)
{
    // variable or field ‘f2’ declared void
}

int main()
{
    int i = 0;

    f1(i);
    f2(i);


    return 0;
}

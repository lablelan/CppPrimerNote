/*
 * 假设已有上一个练习中所做的那些声明，则下面的那些语句是合法的？
 * 清说明顶层const和底层const在每个例子中有何体现
 *
 * r1 = v2;    // 合法 
 * p1 = p2;    // 不合法，p2是底层const,p1是整型指针类型不匹配
 * p2 = p1;    // 合法，p2是底层const，可以改变指向
 * p1 = p3;    // 不合法，类型不匹配；p3即是顶层const也是底层const，底层const不能改变指向的内存的值;p1是一个指针变量,可以通过p1改变指向内存的值
 * p2 = p3;    // 合法，p2是底层const，可以改变指向
 *
 */


#include <iostream>

int main()
{
    const int v2 = 0;
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    int i = 1;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;

    // test
    r1 = v2;
    //p1 = p2;
    p2 = p1;
    //p1 = p3;
    p2 = p3;

    return 0;
}

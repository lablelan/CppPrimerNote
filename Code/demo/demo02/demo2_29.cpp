#include <iostream>

int main()
{
    int i;
    const int ic = 10;
    i = ic;                 // (a)合法

    int *p1;
    const int *const p3 = p1;
    //p1 = p3;              // (b)不合法，类型不一致，const int* 不能直接给int*
    //p1 = &ic;               // (c)不合法，类型不一致，const int 类型并不能被int *类型改变
    //p3 = &ic;                   // (d)不合法，类型不一致
    int *const p2 = p1;
    p2 = p1;                    // (e)不合法，*const 不能改变指针指向
    ic = *p3;                   // (f)不合法，常量初始化后不能被改变


    return 0;
}

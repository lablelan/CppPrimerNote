#include <iostream>

int main()
{
    //int i = -1, &r = 0;                       // （a）不合法，引用必须是可以被改变的变量的别名
    //int i2 = 10; int *const p2 = &i2;         // （b）合法
    //const int i = -1, &r = 0; r = 1;          // （c）合法?定义引用就是为了改变其值，但这里没有报错
    //int i2 = 10; const int *const p3 = &i2;   // （d）合法
    //int i2 = 10; const int *p1 = &i2;         // （e）合法
    //const int &const r2;                      // （f）不合法，引用必须初始
    //int i = 10; const int i2 = i, &r = i;     // （g）合法

    return 0;
}

#include <iostream>

// a：合法，引用是一个别名
// b：合法，相当于一个变量赋值给一个别名
// c：合法，别名给变量赋值相当于变量赋值给变量
// d：合法，相当于将r1别名改成d的别名

int main()
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    r2 = 3.14159;
    r2 = r1;
    i = r2;
    r1 = d;

    return 0;
}

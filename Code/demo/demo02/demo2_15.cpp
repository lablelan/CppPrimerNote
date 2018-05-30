#include <iostream>

// a：合法，丢失精度
// b：不合法，引用必须初始化
// c：合法
// d：不合法，引用必须初始化

int main()
{
    int ival = 1.01;
    //int &rval1 = 1.01;
    int &rval2 = ival;
    //int &rval3;

    return 0;
}

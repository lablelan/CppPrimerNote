#include <iostream>

// 不能吧0直接赋值给指针的情况
// error: invalid conversion from ‘int’ to ‘int*’ [-fpermissive]
// NULL其实是一个预处理变量，定义在cstdlib头文件中，值是0
// c++11 nulptr会自动转换类型 

int main()
{
    int zero;

    int *pi = zero;

    return 0;
}

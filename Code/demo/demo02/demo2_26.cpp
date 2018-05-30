#include <iostream>

int main()
{
    const int buf;      // 不合法，buf必须有初值 
    int cnt = 0;
    const int sz = cnt;
    ++cnt;              // 合法，cnt是一个变量
    ++sz;             // 不合法，sz是一个常量:

    return 0;
}

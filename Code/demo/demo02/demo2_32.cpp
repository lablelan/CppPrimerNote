#include <iostream>

constexpr int null = 0;

int main()
{
    //int null = 0, *p = (int *)null;// 将null强转成地址
    //int null = 0, *p = &null;      // 取null地址

    const int *p = &null;

    return 0;
}

#include <iostream>

int main()
{
    int i = 0;
    double *dp = &i;    // 不能直接将int类型指针赋值给double类型指针
    int *p = &i;
    int *ip = i;        // 不能直接将整形0转成指针

    return 0;
}

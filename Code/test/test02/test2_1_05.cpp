#include <iostream>

// 没有报错，而是报了warning

int main()
{
    long double ld = 3.1415926536;
    int a{ld}, b = {ld};

    return 0;
}

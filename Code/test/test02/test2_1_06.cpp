#include <iostream>

// 没有报错或warning但精度丢失

int main()
{
    double ld = 3.1415926536;
    int c(ld), d = ld;


    std::cout << c << " " << d << std::endl;

    return 0;
}

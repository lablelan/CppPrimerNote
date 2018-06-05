#include <iostream>

int main()
{
    int a = 10;
    int b = 20;

    int &c = (a = b);   // =号操作符返回a的引用

    std::cout << c << std::endl;


    return 0;
}

#include <iostream>

// C++重载了int类型的=操作符，返回一个引用

int main()
{
    int i = 1;
    int x = 2;
    int a = (i = x);
    std::cout << a << std::endl;
    a = 111;
    std::cout << "i = " << i << " x = " << x << " a = " << a << std::endl;


    return 0;
}

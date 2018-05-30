#include <iostream>

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((a = b)) d = a;

    // c是整型，d是整型引用
    std::cout << "a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;

    return 0;
}

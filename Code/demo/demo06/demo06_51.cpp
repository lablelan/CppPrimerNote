#include <iostream>

void f()
{
    std::cout << " " << std::endl; 
}

void f(int i)
{
    std::cout << "i:" << i << std::endl;
}

void f(int i1, int i2)
{
    std::cout << "i1:" << i1 << " " << "i2:" << i2 << std::endl;
}

void f(double d1, double d2 = 3.14)
{
    std::cout << "d1:" << d1 << " " << "d2:" << d2 << std::endl;
}

void f(double d, int i)
{

    std::cout << "d:" << d << " " << "i:" << i << std::endl;
}

int main()
{
    f(2.56, 42);
    f(42);
    f(42, 0);
    f(2.56, 3.14);

    return 0;
}

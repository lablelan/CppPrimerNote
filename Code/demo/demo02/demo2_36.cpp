#include <iostream>

// decltype使用一个不加括号的变量，那么结果就是该变量的类型
// decltype使用加括号的变量，编译器会把他当成一个表达式，变量是一种可以作为赋值语句的特殊表达式，所以得到引用类型。

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;    // c是整型
    decltype((b)) d = a;  // d是int &
    ++c;// c == 4
    std::cout << "a = " << a << " c = " << c << std::endl;
    ++d;// d == 4
    std::cout << "a = "<< a << " b = " << b << " d = " << d << std::endl;


    return 0;
}

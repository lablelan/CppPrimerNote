#include <iostream>

// 逗号运算符:先对左侧的表达式求值,然后将结果丢弃,再对右侧的表达式求值,然后返回右侧表达式结果.
// 如果右侧运算对象是左值,那么最终的求值也是左值.

int main()
{
    bool someValue = true;
    int x = 1, y = 3;

    int tmp = (someValue ? ++x, ++y : --x, --y);

    std::cout << "tmp: " << tmp << std::endl;
    std::cout << "(x, y):" << "(" << x << ", " << y << ")" << std::endl;

    return 0;
}

#include <iostream>

// 使用char无法改变字符串的内容，因为变量只是一个副本

int main()
{
    std::string str = "hello, how old are you?";
    for (char c : str)
    {
        c = 'X';
    }
    std::cout << str << std::endl;

    return 0;
}

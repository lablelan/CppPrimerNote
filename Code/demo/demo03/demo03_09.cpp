#include <iostream>

// 合法，但s是空字符串，应该判断是否可以访问

int main()
{
    std::string s;
    std::cout << s[0] << std::endl;
    std::cout << s.size() << std::endl;

    return 0;
}

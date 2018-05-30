/*
 * a.0个
 * b.10个初始化为0整数
 * c.10个初始化为42的整数
 * d.1个初始化为10的整数
 * e.2个分别初始化为10和42
 * f.10个初始化为空字符串
 * g.10个初始化为hi字符串
 */


#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> v7{10, "hi"};
    std::cout << v7.size() << std::endl;
    for (auto s : v7)
    {
        std::cout << s << std::endl;
    }

    return 0;
}

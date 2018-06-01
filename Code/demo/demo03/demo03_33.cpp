#include <iostream>

// 不初始化数组可能会出现垃圾值

int main()
{
    unsigned scores[11];

    for (auto s : scores)
    {
        std::cout << s << std::endl;
    }

    return 0;
}

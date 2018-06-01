#include <iostream>
#include <vector>

int main()
{
    int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,10,11 };
    // 版本1 范围for循环
    for (auto &i : ia)
    {   
        for (auto &a : i)
        {
            std::cout << a << std::endl; 
        }
    }
    // 版本2 下标运算符循环
    for (size_t i = 0; i < 3; ++i)
    {
        for (size_t j = 0; j < 4; ++j)
        {
            std::cout << ia[i][j] << std::endl;
        }
    }
    // 版本3 用指针循环
    for (auto i = std::begin(ia); i != std::end(ia); ++i)
    {
        for (auto j = std::begin(*i); j != std::end(*i); ++j)
        {
            std::cout << *j << std::endl;
        }
    }

    return 0;
}
